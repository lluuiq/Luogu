#include <bits/stdc++.h>

using namespace std;

int main() {
    double x, a = 2, sum = 2;
    cin >> x;
    int step = 1;
    while (sum < x) {
        a *= 0.98;
        sum += a;
        step++;
    }

    cout << step;
    return 0;
}