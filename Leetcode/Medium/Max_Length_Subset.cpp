#include <bits/stdc++.h>
using namespace std;

int maximumLength(vector<int> &nums) {
  unordered_map<long long, int> map;
  for (int ele : nums) {
    map[ele]++;
  }

  int mx = 1;

  if (map.count(1)) {
    if (map[1] % 2 == 0) {
      mx = map[1] - 1;
    } else {
      mx = map[1];
    }
  }

  for (auto ele : map) {
    if (ele.second <= 1 or ele.first == 1)
      continue;

    int temp = 2;
    long long num = ele.first;

    while (true) {
      long long next_num = num * num;

      if (map.count(next_num) && map[next_num] == 1) {
        temp += 1;
        break;
      } else if (map.count(next_num) && map[next_num] >= 2) {
        temp += 2;
        num = next_num;
      } else {
        temp -= 1;
        break;
      }
    }
    mx = max(temp, mx);
  }
  return mx;
}
