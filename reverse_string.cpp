#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    int n = s.length();
    for (int i = 0; i < n / 2; i++) {
        swap(s[i], s[n - i - 1]);
    }

    cout << "Reversed string: " << s << endl;
    return 0;
}
