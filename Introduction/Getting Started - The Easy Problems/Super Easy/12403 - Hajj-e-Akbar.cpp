#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    int i = 0;
    while (s != "*") {
        i++;
        if (s == "Hajj")
            cout << "Case " << i << ": Hajj-e-Akbar" << endl;
        else
            cout << "Case " << i << ": Hajj-e-Asghar" << endl;
        cin >> s;
    }
}