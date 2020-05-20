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

float t;
int n;

int main() {
    cin >> t >> n;
    printf("%.3lf\n%d", t / n, n * 2);
    return 0;
}