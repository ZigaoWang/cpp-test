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
    // find the most common word and cout it, with how many times it appeared after it
    string word;
    int max = 0;
    for (int i = 0; i < text.size(); i++) {
        if (isalpha(text[i])) {
            word += text[i];
        } else {
            if (word.size() > 0) {
                int count = 0;
                for (int j = 0; j < text.size(); j++) {
                    if (text.substr(j, word.size()) == word) {
                        count++;
                    }
                }
                if (count > max) {
                    max = count;
                }
                word = "";
            }
        }
    }
    cout << word << " " << max << endl;

    return 0;
}
