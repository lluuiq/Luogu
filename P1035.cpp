#include <bits/stdc++.h>

using namespace std;

int main() {
    int k;
    cin >> k;
    int n = 0;
    double sum = 0;
    while (sum <= k) {
        ++n;
        sum += 1.0 / n;
    }
    cout << n;
    return 0;
}