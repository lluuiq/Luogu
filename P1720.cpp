#include <bits/stdc++.h>

using namespace std;

int main() {
    double n;
    cin >> n;
    // 直接算。。
//    printf("%.2lf", (pow((1 + sqrt(5)) / 2, n) - pow((1 - sqrt(5)) / 2, n)) / sqrt(5));
    // 斐波那契数列
    vector<double> nums(48);
    nums[0] = 1;
    nums[1] = 1;
    for (int i = 2; i < n; ++i) {
        nums[i] = nums[i - 1] + nums[i - 2];
    }
    printf("%.2lf", nums[n - 1]);
    return 0;
}