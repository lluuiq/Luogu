#include <bits/stdc++.h>

using namespace std;

// 判断是否为回文数的函数
int isHuiWen(int num) {
    int a = 0;
    int b = num;
    while (num > 0) {
        a = a * 10 + num % 10;
        num /= 10;
    }

    if (a == b) return 1;
    else return 0;
}


int main() {
    int a, b;
    cin >> a >> b;
    // 一个偶数位的数字，如 1441 1442 1443 1444
    // 除了11这个偶数数字外，其余的数字都不可能是回文素数，因为能是回文的肯定是11的倍数 如1441 ，但他又因为能被11整除所以不是素数
    // 题目说b小于等于1E，1E肯定不是素数，往下是8位数字， 8位数肯定都不是回文素数，所以如果b>=8位数，直接取为七个9
    // 并且不加这个会超出内存限制
    if (b >= 10000000) b = 9999999;
    // 初始化是判断否为素数的列表，初始化为1，全是素数
    vector<int> is_prime(b + 1, 1);
    // 众所周知 0与1不是素数，并且无法删除倍数，需要从2开始
    is_prime[0] = is_prime[1] = 0;
    for (int p = 2; p <= b; ++p) {
        // 若p为素数s
        if (is_prime[p] == 1) {
            // 将p的倍数全设为不是素数。
            for (int i = p + p; i <= b; i += p) {
                is_prime[i] = 0;
            }
        }
    }


    if (a % 2 == 0) a++;
    for (; a <= b; a += 2) {
        if (is_prime[a] && isHuiWen(a)) {
            cout << a << endl;
        }
    }


    return 0;
}