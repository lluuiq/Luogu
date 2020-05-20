#include <bits/stdc++.h>

using namespace std;

int year;

int main() {
    cin >> year;
    cout << ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
    return 0;
}