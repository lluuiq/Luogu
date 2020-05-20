#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    int sum = 0;

    for (int i = 1; i <= n; ++i) {
        string str = to_string(i);
        for (int j = 0; j < str.length(); ++j) {
            // 字符串中的数字字符转为int的方法 减去'0'
            if (str[j] - '0' == x) sum++;
        }
    }
    cout << sum;
    return 0;
}