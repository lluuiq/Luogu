#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;
    char A, B, C;
    cin >> a >> b >> c;
    cin >> A >> B >> C;
    vector<int> nums;
    nums.push_back(a);
    nums.push_back(b);
    nums.push_back(c);
    sort(nums.begin(), nums.end());

    if (A > B && A > C) {
        if (B > C) cout << nums[2] << " " << nums[1] << " " << nums[0];
        else cout << nums[2] << " " << nums[0] << " " << nums[1];
    } else if (B > A && B > C) {
        if (A > C) cout << nums[1] << " " << nums[2] << " " << nums[0];
        else cout << nums[0] << " " << nums[2] << " " << nums[1];
    } else {
        if (A > B) cout << nums[1] << " " << nums[0] << " " << nums[2];
        else cout << nums[0] << " " << nums[1] << " " << nums[2];
    }
    return 0;
}