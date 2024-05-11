#include <iostream>
#include <cctype>
#include <algorithm>
#include <string>

using namespace std;
int main() {
    string text;
    getline(cin, text);
    // convert the text to lowercase
    transform(text.begin(), text.end(), text.begin(), ::tolower);
    // convert all non-alphabetic characters to spaces
    for (int i = 0; i < text.size(); i++) {
        if (!isalpha(text[i])) {
            text[i] = ' ';
        }
    }
    // find the most common word
    string mostCommonWord;
    int maxCount = 0;
    int i = 0;
    while (i < text.size()) {
        while (i < text.size() && text[i] == ' ') {
            i++;
        }
        int j = i;
        while (j < text.size() && text[j] != ' ') {
            j++;
        }
        string word = text.substr(i, j - i);
        int count = 0;
        for (int k = 0; k < text.size(); k++) {
            if (text[k] == ' ') {
                int l = k + 1;
                while (l < text.size() && text[l] != ' ') {
                    l++;
                }
                string otherWord = text.substr(k + 1, l - k - 1);
                if (word == otherWord) {
                    count++;
                }
                k = l;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            mostCommonWord = word;
        }
        i = j;
    }
    cout << mostCommonWord << " " << maxCount << endl;
    return 0;
}
