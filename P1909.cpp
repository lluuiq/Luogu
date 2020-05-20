#include <bits/stdc++.h>

using namespace std;

//需要的铅笔数量，每一包里的铅笔数量，每一包价格，买该种类包装的铅笔需要花费的价格
int n, nums, price, cost;
// 价格列表，用于排序
vector<int> cost_list;

int main() {
    // 输入想购买的铅笔数量
    cin >> n;
    // 计算各个包装所需要的花费，同时加入到价格列表中
    for (int i = 0; i < 3; ++i) {
        cin >> nums >> price;
        // 若没除尽，则要加一包
        cost = n % nums == 0 ? (n / nums) * price : (int) (n / nums + 1) * price;
        cost_list.push_back(cost);
    }
    // 排序
    sort(cost_list.begin(), cost_list.end());
    // 输出价格最低的
    cout << cost_list[0];
    return 0;
}