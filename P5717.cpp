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

    // 注意若不是三角形则以下的判断均无效。
    if (a + b < c || a + c < b || c + b < a) {
        cout << "Not triangle" << endl;
        return 0;
    }
    if (nums[0] * nums[0] + nums[1] * nums[1] == nums[2] * nums[2]) cout << "Right triangle" << endl;
    if (nums[0] * nums[0] + nums[1] * nums[1] > nums[2] * nums[2]) cout << "Acute triangle" << endl;
    if (nums[0] * nums[0] + nums[1] * nums[1] < nums[2] * nums[2]) cout << "Obtuse triangle" << endl;
    if (nums[0] == nums[1] || nums[1] == nums[2]) cout << "Isosceles triangle" << endl;
    if (nums[0] == nums[1] && nums[0] == nums[2] && nums[1] == nums[2]) cout << "Equilateral triangle";
    return 0;
}