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
    
    return 0;
}
