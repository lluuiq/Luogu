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
    int a, b;
    cin >> a >> b;
    double money = (double) a + (double) b / 10;
    cout << (int) (money / 1.9);
    return 0;
}