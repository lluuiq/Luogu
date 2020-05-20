#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> nums;
    nums.push_back(a);
    nums.push_back(b);
    nums.push_back(c);
    sort(nums.begin(), nums.end());
    int min = nums[0];
    int max = nums[2];

    int num = 1;
    for (int i = 2; i < sqrt(min); ++i) {
        if (min % 2 == 0 && max % 2 == 0) num = i;
    }
    cout << min / num << "/" << max / num;
    return 0;
}