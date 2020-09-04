#include <iostream>
#include <string.h>
#include <vector>

#define infinite 100000000
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> pii;

#define mp make_pair
#define pb(x) push_back(x)

pii M[101][21001];
vi monedas;

#define total first
#define cantidad second

pii min(pii a, pii b) {
    if (a.total < b.total)
        return a;
    else if (b.total < a.total)
        return b;
    else if (a.cantidad <= b.cantidad)
        return a;
    else
        return b;
}

// Ancho máximo de la matriz
int final(int k) {
    int suma = 0;
    for (int i = 0; i < 101 && monedas[i] != -1; i++) {
        suma += monedas[i];
        if (suma >= k)
            break;
    }
    return suma;
}

int main() {
    int ncasos;
    cin >> ncasos;
    while (ncasos--) {
        memset(M, 0, sizeof(M));
        monedas.clear();

        // Lectura de la entrada
        int n, k;
        cin >> k >> n;

        for (int i = 0; i < n; i++) {
            int aux;
            cin >> aux;
            monedas.pb(aux);
        }
        n++;
        int fin = final(k) + 1;

        // Casos base
        for (int i = 0; i < n; i++) // K = 0
            M[i][0] = mp(0, 0);

        for (int i = 1; i < fin; i++) // N = 0 & K > 0
            M[0][i] = mp(infinite, 0);

        // Recursivo
        for (int i = 1; i < n; i++) {
            for (int j = 1; j < fin; j++) {
                int aux = j - monedas[i-1];
                if (aux >= 0)
                    M[i][j] = min(M[i-1][j], mp(M[i-1][aux].total + monedas[i-1], M[i-1][aux].cantidad + 1));
                else
                    M[i][j] = M[i-1][j];
            }
        }

        // Búsqueda de la solución en la matriz resultante
        pii valor_min = mp(infinite, 0);
        for (int i = k; i < fin; i++) {
            if (M[n-1][i].total >= k)
                valor_min = min(M[n-1][i], valor_min);
        }

        cout << valor_min.total << " " << valor_min.cantidad << endl;
    }

}

