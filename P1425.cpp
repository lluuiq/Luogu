#include <iostream>
#include <exception>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>

#include <string>
#include <vector>
#include <deque>
#include <list>
#include <queue>
#include <set>
#include <stack>

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (d < b) {
        c -= 1;
        d += 60;
    }
    cout << c - a << " " << d - b;
    return 0;
}