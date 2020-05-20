#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; ++i) {
        cin >> a;
        nums.push_back(a);
    }
    int sum = 0, max = 0;
    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] - 1 == nums[i - 1]) {
            sum++;
            if (sum > max) max = sum;
        } else {
            sum = 0;
            continue;
        }
    }
    if (max != 0) max++;
    cout << max;
    return 0;
}