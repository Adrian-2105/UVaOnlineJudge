#include <iostream>

using namespace std;

int main() {
    int ncasos, w, a, b, cont;
    bool inicio = false;
    cin >> ncasos;

    while (ncasos--) {
        if (inicio)
            cout << endl;
        cin >> w;
        cont = 0;
        for (int i = 0; i < w; i++) {
            cin >> a >> b;
            cont += a - b;
        }
        if (cont % w == 0)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
        inicio = true;
    }

}