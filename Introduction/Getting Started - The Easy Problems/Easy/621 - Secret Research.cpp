#include <iostream>

using namespace std;

int main() {
    int ncasos;
    string s;
    cin >> ncasos;

    while (ncasos--) {
        cin >> s;

        if (s.length() == 1 || s.length() == 2)
            cout << "+" << endl;
        else if (s[s.length()-1] == '5')
            cout << "-" << endl;
        else if (s[0] == '9')
            cout << "*" << endl;
        else
            cout << "?" << endl;

        getline(cin, s);
    }

}
