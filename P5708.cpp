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
    double a, b, c;
    cin >> a >> b >> c;
    double p = 0.5 * (a + b + c);
    double area = sqrt(p * (p - a) * (p - b) * (p - c));
    // 控制输出位数，fixed为当位数不够时补0
    printf("%.1lf", area);
    return 0;
}