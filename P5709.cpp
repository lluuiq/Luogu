#include <iostream>
#include <exception>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <iomanip>

#include <string>
#include <vector>
#include <deque>
#include <list>
#include <queue>
#include <set>
#include <stack>

using namespace std;

int main() {
    int m, t, s;
    cin >> m >> t >> s;
    if (t <= 0) {
        cout << m;
        return 0;
    }
    if (s % t == 0) {
        cout << max(m - s / t, 0);
    } else {
        cout << max(m - s / t - 1, 0);
    }
    return 0;
}