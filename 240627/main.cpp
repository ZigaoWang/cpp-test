#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);

    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    int m, k;
    cin >> m >> k;

    numbers.insert(numbers.begin() + m - 1, k);

    for (int i = 0; i < numbers.size(); ++i) {
        cout << numbers[i] << " ";
    }

    return 0;
}