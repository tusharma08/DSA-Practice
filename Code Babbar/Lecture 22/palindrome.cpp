#include <iostream>
#include <string>
using namespace std;

bool palindrome(string str) {
    int s = 0;
    int e = str.length() - 1;
    while (s <= e) {
        if (str[s] != str[e]) {
            return false;
        }
        s++;
        e--;
    }
    return true;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin>>str;

    if (palindrome(str)) {
        cout << "Palindrome String" << endl;
    } else {
        cout << "Not Palindrome" << endl;
    }
    return 0;
}
