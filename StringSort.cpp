#include <iostream>
#include <string>

using namespace std;

bool ss(const string& str, char target) {
    if (str.length() == 0) { // if string length is 0
        return false;
    }
    for (int i = 0; i < str.length(); i++) { // finding the character in string
        if (target == str[i]) {
            return true;
        }
    }
    return false;
}

int main() {
    string str = "hello word";
    char want = 'k';
    bool ans = ss(str, want);
    if (ans == true) {
        cout << "Expected character is present in given string" << endl;
    } else {
        cout << "Expected character not there in given string" << endl;
    }

    return 0;
}
