#include <bits/stdc++.h>
using namespace std;
double angleClock(int hour, int minutes) {
  if (hour == 12)
    hour = 0;
  double ang_min = minutes * 6;
  double ang_hour = hour * 30 + (double)minutes / 2.0;
  return min(abs(ang_min - ang_hour), 360 - abs(ang_min - ang_hour));
}
int main() {
  cout << angleClock(3, 14);
  return 0;
}
