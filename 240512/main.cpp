#include <iostream>
using namespace std;
int main() {
    int a = 10;
    cout << &a << endl; // 取地址符号：16进制
    int *p = &a;
    cout << *p;
    return 0;
}
