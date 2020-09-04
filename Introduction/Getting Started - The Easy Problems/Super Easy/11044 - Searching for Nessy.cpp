#include <iostream>

using namespace std;

int main() {
    int t, n, m;
    cin >> t;

    while (t--) {
        cin >> n >> m;

        int anchura = n/3;

        if (anchura == 0)
            anchura = 1;

        int altura = m/3;

        if (altura == 0)
            altura = 1;

        cout << anchura * altura << endl;
    }

}