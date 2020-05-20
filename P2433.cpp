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

using namespace std;

void topic1() {
    cout << "I love Luogu!";
}

void topic2() {
    const int apple = 10;
    int A = 2, Uim = 4;
    cout << A + Uim << " " << apple - (A + Uim);
}

void topic3() {
    const int apple = 14;
    const int student = 4;
    int everyone_get_apple = apple / student;
    int out_apple = everyone_get_apple * student;
    int result_apple = apple - out_apple;
    cout << everyone_get_apple << endl << out_apple << endl << result_apple;
}

void topic4() {
    const double water = 500;
    const int student = 3;
    // 有效数字为3位，由答案知有三位在整数位，所以最后结果取3位小数即可。
    printf("%.3lf", water / student);
}

// 火车相遇问题 总路程=时间*速度之和
void topic5() {
    cout << (260 + 220) / (12 + 20);
}

// 勾股定理
void topic6() {
    cout << sqrt(36 + 81);
}

void topic7() {
    // 第一次操作存10元输出余额110， 第二次操作花20元输出余额90，第三次操作取出全部的钱输出余额0
    cout << 110 << endl << 90 << endl << 0;
}

void topic8() {
    const double PI = 3.141593;
    int r = 5;
    cout << PI * 2 * r << endl << PI * r * r << endl << (4.0 / 3) * PI * r * r * r;
}

void topic9() {
    cout << 22;
}

void topic10() {
    cout << 9;
}

void topic11() {
    // 注意转成double类型
    cout << 1.0 * 100 / 3;
}

void topic12() {
    // 强制类型转换 (转换类型)(要转换的内容)
    cout << (int) ('M' - 'A') + 1 << endl << (char) ('A' + 17);
}

void topic13() {
    const double PI = 3.141593;
    // pow函数 pow(x,y) = x的y次方 ，x、y的类型为double
    // 求棱长，则先求融合在一起的球的体积，然后乘上1/3次方
    cout << (int) (pow(4.0 / 3 * PI * (4 * 4 * 4 + 10 * 10 * 10), 1.0 / 3));
}

void topic14() {
    // 求售价小，不是售价高的
//    cout << 70;
    cout << 50;
}

int main() {
    int no = 0;
    cin >> no;
    switch (no) {
        case 1:
            topic1();
            break;
        case 2:
            topic2();
            break;
        case 3:
            topic3();
            break;
        case 4:
            topic4();
            break;
        case 5:
            topic5();
            break;
        case 6:
            topic6();
            break;
        case 7:
            topic7();
            break;
        case 8:
            topic8();
            break;
        case 9:
            topic9();
            break;
        case 10:
            topic10();
            break;
        case 11:
            topic11();
            break;
        case 12:
            topic12();
            break;
        case 13:
            topic13();
            break;
        case 14:
            topic14();
            break;
    }

    return 0;
}