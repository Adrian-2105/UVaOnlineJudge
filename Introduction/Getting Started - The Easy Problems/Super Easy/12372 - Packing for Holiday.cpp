#include <iostream>

using namespace std;

int main() {
    int ncasos;
    int a, b, c;
    cin >> ncasos;

    for (int i = 1; i <= ncasos; i++) {
        cin >> a >> b >> c;

        if (a <= 20 && b <= 20 && c <= 20)
            cout << "Case " << i << ": good" << endl;
        else
            cout << "Case " << i << ": bad" << endl;
    }

}