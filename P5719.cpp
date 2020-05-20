#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    double sumA = 0, sumB = 0, suma = 0, sumb = 0;
    cin >> n >> k;
    for (int i = 1; i <= n; ++i) {
        if (i % k == 0) {
            sumA += i;
            suma++;
        } else {
            sumB += i;
            sumb++;
        }
    }
    if (suma != 0) sumA = sumA / suma;
    if (sumb != 0)sumB = sumB / sumb;
    printf("%.1lf %.1lf", sumA, sumB);
    return 0;
}