#include <bits/stdc++.h>

using namespace std;

int year, month;

int main() {
    cin >> year >> month;
    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) days[1] = 29;
    cout << days[month - 1];
}