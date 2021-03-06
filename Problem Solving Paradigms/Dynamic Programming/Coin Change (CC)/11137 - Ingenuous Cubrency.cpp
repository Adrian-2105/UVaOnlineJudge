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

long long M[22][10001];
int m[23];

int main() {
    for (int i = 0; i < 23; i++)
        m[i] = i * i * i;

    for (int i = 0; i < 10001; i++)
        M[0][i] = 0;
    for (int i = 0; i < 22; i++)
        M[i][0] = 1;

    for (int i = 1; i < 22; i++) {
        for (int j = 1; j < 10001; j++) {
            int aux = j - m[i];
            if (aux >= 0)
                M[i][j] = M[i-1][j] + M[i][aux];
            else
                M[i][j] = M[i-1][j];
        }
    }

    int c;
    while (cin >> c) {
        cout << M[21][c] << endl;
    }
}
