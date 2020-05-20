#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, sum = 1;
    cin >> a;
    while (a != 1) {
        a = a / 2;
        sum++;
    }
    cout << sum;
    return 0;
}