#include <iostream>
using namespace std;
int main() {
    int a = 10;
    cout << &a << endl; // 取地址符号：16进制
    int *p = &a;
    cout << *p << endl;
    cout << &p << endl;

    int *b = nullptr; // 空指针
    cout << b; // 输出为 0x0

    int test[100];
    cout << test; // 输出为数组第一位 0 的地址

    return 0;
}
