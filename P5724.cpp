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
    sort(nums.begin(), nums.end());
    cout << nums[n - 1] - nums[0];
    return 0;
}