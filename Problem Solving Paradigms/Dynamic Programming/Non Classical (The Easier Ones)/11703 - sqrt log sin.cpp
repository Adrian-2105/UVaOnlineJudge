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

int x[1000001];

int main() {
    x[0] = 1;
    for (int i = 1; i < 1000001; i++) {
        x[i] = (x[(int)(i-sqrt(i))] + x[(int)log(i)] + x[(int)(i * pow(sin(i), 2))]) % 1000000;
    }
    int a = 0;
    while (cin >> a) {
        if (a != -1)
            cout << x[a] << endl;
        else
            break;
    }
}

