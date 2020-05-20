#include <bits/stdc++.h>

using namespace std;

int school, other;

int main() {
    int result = 0, max = 1;
    for (int i = 1; i < 8; ++i) {
        cin >> school >> other;
        if (school + other >= 8 && school + other > result) {
            result = school + other;
            max = i;
        }
    }
    cout << max;
    return 0;
}