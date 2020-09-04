#include <iostream>

using namespace std;

int main() {
    int n, m, x, y, a, b;

    cin >> n;

    while (n != 0) {
        cin >> x >> y;
        while (n--) {
            cin >> a >> b;

            if (a == x || b == y)
                cout << "divisa" << endl;
            else {
                if (a < x) {
                    if (b < y)
                        cout << "SO" << endl;
                    else
                        cout << "NO" << endl;
                }
                else {
                    if (b > y)
                        cout << "NE" << endl;
                    else
                        cout << "SE" << endl;
                }
            }

        }
        cin >> n;
    }

}