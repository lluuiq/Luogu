#include <bits/stdc++.h>

using namespace std;
string ISBN;
char mod[12] = "0123456789X";
int sum = 0;

//0-670-82162-4
int main() {
    cin >> ISBN;
    int j = 1;

    // 遍历字符串求sum
    for (int i = 0; i < ISBN.size() - 1; ++i) {
        if (ISBN[i] != '-') {
            sum += (ISBN[i] - '0') * j++;
        }
    }
    // 若尾码等于计算值，则返回Right
    if (ISBN[ISBN.length() - 1] == mod[sum % 11]) cout << "Right";
        // 不等于则修改尾码
    else {
        ISBN[ISBN.length() - 1] = mod[sum % 11];
        cout << ISBN;
    }

    return 0;
}