#include <iostream>
#include <string>
#include <map>
using namespace std;

// 判断输入字符是否合法
bool hf (char s) {
    if (s >= '0' && s <= '9') return true;
    if (s >= 'a' && s <= 'z') return true;
    if (s >= 'A'&& s <= 'Z') return true;
    return false;
}


int main() {
    string s, t;
    getline(cin, s);
    map<string, int> mp;
    for (int i = 0; i < s.length(); i++){
        // 接收一个单词，以非法字符作为隔绝
        if (hf(s[i])){
            s[i] = tolower(s[i]); //将存入单词的所有字符都转换成小写字母
            t += s[i]; //将完整的单词存入t中
        }
        // 在map中统计单词出现的次数
        if(!hf(s[i]) || i == s.length() - 1){
            if (t.length() != 0) mp[t]++;
            t.clear(); // 清空t
        }
    }
    int max = 0;
    auto it=mp.begin();
    for(; it != mp.end(); it++){
        // 找到map中最大的整数，以及所对应的字符串，即为出现次数最多的单词
        if (max < it -> second){
            max = it -> second;
            t = it -> first;
        }
    }
    cout << t << " " << max;
    return 0;
}