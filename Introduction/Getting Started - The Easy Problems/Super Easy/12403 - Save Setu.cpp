#include <iostream>

using namespace std;

int main() {
    int ncasos;
    int n = 0, aux;
    string s;

    cin >> ncasos;

    while (ncasos--) {
        cin >> s;
        if (s == "report")
            cout << n << endl;
        else {
            cin >> aux;
            n += aux;
        }
    }
}