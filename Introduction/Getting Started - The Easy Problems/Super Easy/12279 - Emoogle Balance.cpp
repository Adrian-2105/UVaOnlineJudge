#include <iostream>

using namespace std;

int main() {
    int n, a, i = 1;
    cin >> n;

    while (n != 0) {
        int cont = 0;
        while (n--) {
            cin >> a;
            if (a)
                cont++;
            else
                cont--;
        }

        cout << "Case " << i << ": " << cont << endl;
        cin >> n;
        i++;
    }

}
