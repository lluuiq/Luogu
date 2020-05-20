#include <bits/stdc++.h>

using namespace std;


// 将数字存放在数组中
void set_nums(vector<int> &nums, int num) {
    while (num > 0) {
        nums.push_back(num % 10);
        num /= 10;
    }
}

int main() {
    int n;
    vector<int> nums_one;
    vector<int> nums_two;
    cin >> n;

    // 将数字放入数组one中
    set_nums(nums_one, n);
    set_nums(nums_two, n - 1);

    for (int i : nums_one) {
        int add = 0;
        for (int j : nums_two) {
            int mul = i * j;
            while (mul > 10) {
                add++;
                mul /= 10;
            }

            nums_two[j] = mul + add;
        }
    }

    return 0;
}