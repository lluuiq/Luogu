#include <bits/stdc++.h>

using namespace std;

/*  很长的取值范围，可以考虑使用数组来存储数字来进行操作*/
int main() {
    long long n;
    vector<int> nums;
    cin >> n;
    // 若有负号，则先输出个负号，然后转为正数
    if (n < 0) {
        n = -n;
        cout << '-';
    }
    // 若位数有0 统统去掉
    while (!(n % 10)) {
        n /= 10;
    }

    // 逆序输出
    while (n) {
        cout << n % 10;
        n /= 10;
    }
    return 0;
}