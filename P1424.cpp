#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, n;
    int sum = 0;
    cin >> x >> n;
    int week[7] = {1, 2, 3, 4, 5, 6, 7};
    for (; n != 0; --n, ++x) {
        if (week[x - 1] == 6) continue;
        if (week[x - 1] == 7) {
            x = 0;
            continue;
        }
        sum += 250;
    }
    cout << sum;
    return 0;
}