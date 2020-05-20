#include <bits/stdc++.h>

using namespace std;

int x;
int A = 0, Uim = 0, ba = 0, sister = 0;

int main() {
    cin >> x;
    int one = 0, two = 0;
    if (x % 2 == 0) one = 1;
    if (x > 4 && x <= 12) two = 1;
    if (one == 1 && two == 1) A = 1;
    if (one == 1 || two == 1) Uim = 1;
    if ((one == 1 && two == 0) || (one == 0 && two == 1)) ba = 1;
    if (one == 0 && two == 0) sister = 1;
    cout << A << " " << Uim << " " << ba << " " << sister;
    return 0;
}