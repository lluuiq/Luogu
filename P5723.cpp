#include <bits/stdc++.h>

using namespace std;

int main() {
    int l, num_sum = 0, sum = 0, flag;
    cin >> l;
    for (int i = 2;; ++i) {
        flag = 1;
        for (int j = 2; j <= sqrt(i); ++j) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }
        if (flag == 1) {
            sum += i;
            if (sum > l) break;
            cout << i << endl;
            num_sum++;
        }
    }
    cout << num_sum;
    return 0;
}