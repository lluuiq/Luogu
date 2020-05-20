#include <bits/stdc++.h>
/* 来自讨论：
 * 排列组合？
 * 因为一个点仅由两条线相交而得， 一条线能确定两个点，所以一个交点就能确定4个顶点
 * 题目求有多少交点，可看成从n个顶点中 有放回的取4个顶点，一共有多少种取法。
 * C(4_n) 可得出公式
 * */

using namespace std;

unsigned long long n;

int main() {
    scanf("%lld", &n);
    cout << n * (n - 1) / 2 * (n - 2) / 3 * (n - 3) / 4;
    return 0;
}