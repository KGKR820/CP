#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

// Structure to represent an event in the priority queue
struct Event {
  long long crash_time;
  int u;

  // Min-heap: smallest crash_time is top
  bool operator>(const Event &other) const {
    return crash_time > other.crash_time;
  }
};

// Global variables for problem data
int n, m;
long long h;
vector<long long> a;
// adj[u] stores pairs of (time, accumulated_value) for index u
vector<vector<pair<int, long long>>> adj;
// To track the latest valid prediction for each index to avoid duplicate
// processing
vector<long long> predicted_crash;
priority_queue<Event, vector<Event>, greater<Event>> pq;

// Function to find the next crash for index u starting from current_start_time
// and push it to the priority queue
void schedule_next_crash(int u, int current_start_time) {
  long long limit_u = h - a[u];

  // Find the base accumulated value at current_start_time
  // We look for the last operation with time <= current_start_time
  auto it_base = upper_bound(
      adj[u].begin(), adj[u].end(), current_start_time,
      [](int time, const pair<int, long long> &p) { return time < p.first; });
  it_base--; // Iterator to the state at current_start_time
  long long base_val = it_base->second;

  // We want to find the first operation t > current_start_time such that:
  // accumulated_val[t] - base_val > limit_u
  // => accumulated_val[t] > base_val + limit_u
  long long threshold = base_val + limit_u;

  // Binary search for the first value exceeding threshold
  // Since adj is sorted by time and values are monotonic (c_i >= 0), this works
  auto it_next = upper_bound(adj[u].begin(), adj[u].end(), threshold,
                             [](long long val, const pair<int, long long> &p) {
                               return val < p.second;
                             });

  if (it_next != adj[u].end()) {
    int t = it_next->first;
    // Only valid if the crash happens AFTER the current start
    if (t > current_start_time) {
      predicted_crash[u] = t;
      pq.push({(long long)t, u});
      return;
    }
  }

  // No future crash found
  predicted_crash[u] = -1;
}

void solve() {
  cin >> n >> m >> h;

  a.assign(n + 1, 0);
  for (int i = 1; i <= n; ++i) {
    cin >> a[i];
  }

  // Initialize adjacency list with (0, 0)
  adj.assign(n + 1, vector<pair<int, long long>>());
  for (int i = 1; i <= n; ++i) {
    adj[i].push_back({0, 0});
  }

  // Read operations
  for (int i = 1; i <= m; ++i) {
    int b;
    long long c;
    cin >> b >> c;
    long long current_sum = adj[b].back().second;
    adj[b].push_back({i, current_sum + c});
  }

  // Clear PQ and prediction tracker
  while (!pq.empty())
    pq.pop();
  predicted_crash.assign(n + 1, -1);

  // Initial scheduling from time 0
  for (int i = 1; i <= n; ++i) {
    schedule_next_crash(i, 0);
  }

  int last_reset_time = 0;

  while (!pq.empty()) {
    Event top = pq.top();
    pq.pop();

    int t = top.crash_time;
    int u = top.u;

    // Garbage collection: if this event doesn't match the latest prediction for
    // u, discard it
    if (t != predicted_crash[u]) {
      continue;
    }

    // If this crash is strictly before or at the last reset, it's outdated.
    // We must reschedule u starting from the current last_reset_time.
    if (t <= last_reset_time) {
      schedule_next_crash(u, last_reset_time);
      continue;
    }

    // Verify if this is still a valid crash.
    // The condition might have changed if last_reset_time moved closer to t.
    // We check: P_u(t) - P_u(last_reset_time) > Limit?

    // Retrieve base value at last_reset_time
    auto it_base = upper_bound(
        adj[u].begin(), adj[u].end(), last_reset_time,
        [](int time, const pair<int, long long> &p) { return time < p.first; });
    it_base--;
    long long base_val = it_base->second;

    // Retrieve value at t (which is the value that triggered this event)
    // We can just look up the value in adj[u] corresponding to time t
    // Since t came from adj[u], it must exist.
    // We can use lower_bound/binary search to find it efficiently
    auto it_curr = lower_bound(
        adj[u].begin(), adj[u].end(), t,
        [](const pair<int, long long> &p, int time) { return p.first < time; });

    long long current_val = it_curr->second;

    if (current_val - base_val > h - a[u]) {
      // Valid Crash!
      // The system resets at time t.
      last_reset_time = t;

      // We need to schedule the next crash for u starting from this new reset
      schedule_next_crash(u, last_reset_time);
    } else {
      // False alarm. The gap became smaller due to a previous reset.
      // Calculate the correct next crash for u from last_reset_time
      schedule_next_crash(u, last_reset_time);
    }
  }

  // Output final array state
  for (int i = 1; i <= n; ++i) {
    // Calculate contribution: Total added since last_reset_time
    auto it_base = upper_bound(
        adj[i].begin(), adj[i].end(), last_reset_time,
        [](int time, const pair<int, long long> &p) { return time < p.first; });
    it_base--;
    long long base_val = it_base->second;
    long long final_val = adj[i].back().second;

    cout << a[i] + (final_val - base_val) << (i == n ? "" : " ");
  }
  cout << "\n";
}

int main() {
  // Optimize I/O operations
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
