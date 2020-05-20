#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int taotao;
    vector<int> nums;
    for (int i = 0; i < 10; ++i) {
        cin >> n;
        nums.push_back(n);
    }
    cin >> taotao;
    taotao += 30;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        if (taotao >= nums[i]) sum++;
    }
    cout << sum;
    return 0;
}