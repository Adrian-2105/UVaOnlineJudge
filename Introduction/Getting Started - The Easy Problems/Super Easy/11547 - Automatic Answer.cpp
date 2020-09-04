#include <iostream>

using namespace std;

int main() {
    int ncasos, n;
    cin >> ncasos;

    while (ncasos--) {
        cin >> n;
        n = ((((((n*567)/9)+7492)*235)/47)-498);
        cout << abs((n%100)/10) << endl;
    }

}
