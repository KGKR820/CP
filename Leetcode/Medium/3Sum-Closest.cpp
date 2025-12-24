#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>

int threeSumClosest(std::vector<int>& arr, int target) {
    int n = arr.size();
    int res = arr[0] + arr[1] + arr[2];
    std::sort(arr.begin(), arr.end());
    for (int i = 0; i < n - 2; i++) {
        if (i > 0 && arr[i] == arr[i - 1]) continue;
        int left = i + 1;
        int right = n - 1;
        while (left < right) {
            int sum = arr[i] + arr[left] + arr[right];
            if (abs(sum - target) < abs(res - target)) {
                res = sum;
            }
            if (sum == target) {
                return target;
            } else if (sum < target) {
                left++;
            } else {
                right--;
            }
        }
    }
    return res;
}

int main() {
    std::vector<int> arr = { -1, 2, 1, -4 };
    int target = 1;
    int ans = threeSumClosest(arr, target);
    std::cout << ans << std::endl;
    return 0;
}
