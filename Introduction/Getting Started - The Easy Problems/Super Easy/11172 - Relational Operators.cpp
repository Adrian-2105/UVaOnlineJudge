#include <iostream>

using namespace std;

int main() {
    int ncasos, a, b;
    cin >> ncasos;

    while (ncasos--) {
        cin >> a >> b;
        if (a > b)
            cout << ">" << endl;
        else if (a < b)
            cout << "<" << endl;
        else
            cout << "=" << endl;
    }

}

