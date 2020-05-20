#include <bits/stdc++.h>

using namespace std;
double m, h;

int main() {
    cin >> m >> h;
    double BMI = m / pow(h, 2.0);
    if (BMI < 18.5) {
        cout << "Underweight";
    } else if (BMI < 24) {
        cout << "Normal";
    } else {
        cout << BMI << endl << "Overweight";
    }
    return 0;
}