#include <iostream>
#include <vector>

using namespace std;
int main() {
    vector<int> vi;
    for (int i = 1; i < 5; i++) {
        vi.push_back(i);
    }
    vi.insert(vi.begin() + 3, -1);
    vi.erase(vi.begin()+1,vi.begin() + 2);
    for (int i = 0; i < vi.size(); i++) {
        cout << vi[i] << " ";
    }
    return 0;
}
