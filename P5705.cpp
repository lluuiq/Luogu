#include <iostream>
#include <exception>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>

#include <string>
#include <vector>
#include <deque>
#include <list>
#include <queue>
#include <set>
#include <stack>

/*输入一个不小于 100 且小于 1000，同时包括小数点后一位的一个浮点数，例如123.4，要求把这个数字翻转过来，变成4.321并输出。*/

using namespace std;

int main() {
    string num;
    cin >> num;
    reverse(num.begin(), num.end());
    cout << num;
    return 0;
}

/* 可以直接把输入当成字符串？？？
 * stl有个函数 reverse() 作用是反转，无返回值，直接修改值
 * reverse(数组.begin(),数组.end())  从数组的开始位置 直到 数组的结束位置，进行反转
 * */