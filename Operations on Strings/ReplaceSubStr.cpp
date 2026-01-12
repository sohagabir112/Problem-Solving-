//Replace a sub-string in a string
#include<iostream>
using namespace std;

int main() {
    string str, toReplace, replacement;
    cout << "Enter main string: ";
    getline(cin, str);

    cout << "Enter substring to replace: ";
    getline(cin, toReplace);

    cout << "Enter replacement string: ";
    getline(cin, replacement);

    int pos = -1;
    for (int i = 0; i <= str.length() - toReplace.length(); i++) {
        bool found = true;
        for (int j = 0; j < toReplace.length(); j++) {
            if (str[i + j] != toReplace[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            pos = i;
            break;  // only first occurrence
        }
    }

    if (pos != -1) {
        string result = "";

        // before match
        for (int i = 0; i < pos; i++)
            result += str[i];

        // add replacement
        result += replacement;

        // after match
        for (int i = pos + toReplace.length(); i < str.length(); i++)
            result += str[i];

        cout << "After replacement: " << result << endl;
    } else {
        cout << "Substring not found." << endl;
    }

    return 0;
}
