#include <iostream>

using namespace std;

int main() {
    int ncasos, n, m, menor, mayor;
    cin >> ncasos;
    while (ncasos--) {
        cin >> n;

        menor = 9999999999;
        mayor = 0;
        for (int i = 0; i < n; i++) {
            cin >> m;
            if (m < menor)
                menor = m;
            if (m > mayor)
                mayor = m;
        }

        cout << (mayor - menor)*2 << endl;
    }

}