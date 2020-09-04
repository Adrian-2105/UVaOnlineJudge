#include <iostream>

using namespace std;

char pieza;
int n, m, casos;

int main() {
    cin >> casos;
    while (casos--) {
        cin >> pieza >> n >> m;
        if (pieza == 'r' || pieza == 'Q') {
            cout << min(n, m) << endl;
        }
        else if (pieza == 'k') {
            cout << (n*m)/2 + ((m%2 != 0)?1:0) << endl;
        }
        else if (pieza == 'K') {
            cout << ((n%2 != 0)?(n/2 + 1):(n/2)) * ((m%2 != 0)?(m/2 + 1):(m/2)) << endl;
        }
    }
}

