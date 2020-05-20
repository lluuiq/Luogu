#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, num, min_num;
    vector<int> nums;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> num;
        nums.push_back(num);
    }
    sort(nums.begin(), nums.end());
    cout << nums[0];

    return 0;
}