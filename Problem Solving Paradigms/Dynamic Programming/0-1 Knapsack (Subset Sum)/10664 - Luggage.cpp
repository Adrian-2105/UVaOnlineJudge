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

int main() {
    int ncasos;
    cin >> ncasos;
    string line;
    int M[21][201];
    int objetos[21];
    getline(cin, line);
    while (ncasos--) {
        //inicializacion
        memset(objetos, -1, sizeof(objetos));

        getline(cin, line);
        stringstream ss;
        ss << line;
        int aux, i = 0, total = 0;
        while (ss >> aux) {
            i++;
            total += aux;
            objetos[i] = aux;
        }
        int n = i;
        if (total % 2 != 0)
            cout << "NO" << endl;
        else {
            int mitad = total / 2;
            memset(M, 0, sizeof(M));

            // recorrido
            for (int i = 1; i < n; i++) {
                for (int j = 1; j < mitad+1; j++) {
                    int a = j - objetos[i];
                    if (a >= 0)
                        M[i][j] = max(M[i-1][j], objetos[i] + M[i-1][a]);
                    else
                        M[i][j] = M[i-1][j];
                }
            }

            if (M[n-1][mitad] == mitad)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}
