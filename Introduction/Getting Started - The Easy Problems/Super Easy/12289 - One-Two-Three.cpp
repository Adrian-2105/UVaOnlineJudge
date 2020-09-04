#include <iostream>

using namespace std;

int compara_one(string s) {
    int n = 0;
    string o = "one";
    for (int i = 0; i < 3; i++) {
        if (s[i] == o[i])
            n++;
    }
    return n;
}

int main() {
    int ncasos;
    string palabra, filtro;
    cin >> ncasos;

    while (ncasos--) {
        cin >> palabra;
        getline(cin, filtro);

        if (palabra.length() == 5)
            cout << "3" << endl;
        else {
            if (compara_one(palabra) >= 2)
                cout << "1" << endl;
            else
                cout << "2" << endl;
        }
    }
}

