#include <iostream>

using namespace std;

int main() {
    string entrada;
    string salida;
    bool open = false;
    while (getline(cin, entrada)) {
        salida.clear();

        for (char c: entrada) {
            if (c == '"') {
                if (!open) {
                    salida.push_back('`');
                    salida.push_back('`');
                    open = true;
                } else {
                    salida.push_back('\'');
                    salida.push_back('\'');
                    open = false;
                }

            } else
                salida.push_back(c);
        }

        salida.push_back('\n');
        cout << salida;
    }

}
