#include <bits/stdc++.h>

using namespace std;

int main() {
    int k, sum = 0, i = 1, day = 1; //天数，每天的钱
    cin >> k;

    // day=1, 2--3, 4--6, 7--10, 11--15时 对应的每日金币为 1,2,3,4,5
    // 所以当day=1，3，6，10，15 时，sum=1x1 + 2x2 + 3x3 + 4x4 + 5x5 +...
    // 可以看出 sum= i*i 的类加， i=1,2,3,4,5....
    // 每次day都加i  加前的day到加i后的day 这区间内，每日金币=i
    for (; day <= k; day += i) {
        sum += i * i;
        i++;
    }
    // 因为判定条件day<=k，所以最后肯定会溢出，把多余的减掉
    sum += (k - day + i) * i;
    cout << sum;
    return 0;
}