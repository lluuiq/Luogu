#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;
    vector<int> nums;
    cin >> a >> b >> c;
    nums.push_back(a);
    nums.push_back(b);
    nums.push_back(c);
    sort(nums.begin(), nums.end());
    for (auto i: nums) cout << i << " ";
    return 0;
}