#include <stdio.h>
#include <algorithm>
#include <assert.h>
#include <bits/stdc++.h>
#include <bitset>
#include <cmath>
#include <complex>
#include <deque>
#include <functional>
#include <iostream>
#include <limits.h>
#include <map>
#include <math.h>
#include <queue>
#include <set>
#include <stack>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <time.h>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <numeric>

#define maxn 501
#define mod 1000009
#define infinite 100000000
#define FOR(i, j, k, in) for (int i = j; i < k; i += in)
#define REP(i, j) FOR(i, 0, j, 1)
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;
typedef double db;
typedef long double ldb;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair <ll, int> pli;
typedef pair <db, db> pdd;
typedef vector<int> vi;
typedef vector< vector<int> > vvi;
typedef vector<pair<int, int>> vii;
#define mp make_pair
#define Fi first
#define Se second
#define pb(x) push_back(x)
#define szz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define ldb ldouble

#define precio first
#define benef second

int suma(pii* objetos, int length) {
    int suma = 0;
    for (int i = 0; i < length; i++)
        suma += objetos[i].precio;
    return suma;
}

int main() {
    int m, n; // tamaño max mochila = m + 200, n = numero objetos
    int a, b;

    // Lectura de la entrada
    while (cin >> m >> n) {
        bool flag = false;
        n += 1;

        pii* objetos = new pii[n];

        for (int i = 1; i < n; i++) {
            cin >> a >> b;
            objetos[i] = mp(a,b);
        }

        if (m >= 1800 && suma(objetos, n) > 2000) {
            m += 201;
            flag = true;
        }
        else
            m += 1;

        // Creación de la matriz
        pii** M = new pii*[n];
        for (int i = 0; i < n; i++)
            M[i] = new pii[m];

        // Recorrido para rellenar la matriz
        for (int i = 0; i < m; i++)
            M[0][i] = mp(0, 0);
        for (int i = 0; i < n; i++)
            M[i][0] = mp(0, 0);

        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++) {
                int prec = j - objetos[i].precio;
                if (prec >= 0)
                    M[i][j] = max(M[i - 1][j], mp(objetos[i].precio + M[i - 1][prec].precio, objetos[i].benef + M[i - 1][prec].benef));
                else
                    M[i][j] = M[i - 1][j];
            }
        }

        pii max = mp(-1, 0);
        for (int i = 0; i < m; i++) {
            if (flag && M[n-1][i].precio >= m - 201 && M[n-1][i].precio <= 2000)
                continue;
            if (M[n - 1][i].benef > max.benef)
                max = M[n - 1][i];
        }
        cout << max.benef << endl;

        // impresion matriz
        /*for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++)
                cout << M[i][j] << " ";
            cout << "\n\n";
        }*/

        // Borrado de la matriz
        for (int i = 0; i < n; i++)
            delete[] M[i];
        delete[] M;
    }
}
