#include <iostream>

using namespace std;

int main() {
    int ncasos;
    int a, b ,c, n;
    cin >> ncasos;
    for (int i = 1; i <= ncasos; i++) {
        cin >> a >> b >> c;

        if (a <= b && a <= c)
            a = 100000;
        else if (b <= a && b <= c)
            b = 100000;
        else
            c = 100000;

        if (a <= b && a <= c)
            n = a;
        else if (b <= a && b <= c)
            n = b;
        else
            n = c;

        cout << "Case " << i << ": " << n << endl;
    }

}
