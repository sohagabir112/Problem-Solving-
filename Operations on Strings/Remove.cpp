//remove all character from string except alphabets
#include<iostream>
using namespace std;

int main() {
    string str, result = "";
    cout << "Enter a string: ";
    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            result += ch;
        }
    }

    cout << "Only alphabets: " << result << endl;

    return 0;
}
