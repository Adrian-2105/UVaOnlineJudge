#include <iostream>

using namespace std;

void lee_linea(int* a) {
    for (int i = 0; i < 4; i++)
        cin >> a[i];
}

bool terminar(int* a) {
    for (int i = 0; i < 4; i++)
        if (a[i] != 0) {
            return false;
        }
    return true;
}

int main() {
    int entrada[4];

    lee_linea(entrada);
    while (!terminar(entrada)) {
        int giros = 120;
        int giro_aux;

        // SENTIDO ANTI-HORARIO
        int posicion = entrada[0];
        if (posicion >= entrada[1])
            giro_aux = posicion - entrada[1];
        else {
            giro_aux = posicion;
            posicion = 0;
            giro_aux += 40 - entrada[1];
        }
        giros += giro_aux;

        // SENTIDO HORARIO
        posicion = entrada[1];
        if (posicion <= entrada[2])
            giro_aux = entrada[2] - posicion;
        else {
            giro_aux = 40 - posicion;
            posicion = 0;
            giro_aux += entrada[2] - posicion;
        }
        giros += giro_aux;

        // SENTIDO ANTI-HORARIO
        posicion = entrada[2];
        if (posicion >= entrada[3])
            giro_aux = posicion - entrada[3];
        else {
            giro_aux = posicion;
            posicion = 0;
            giro_aux += 40 - entrada[3];
        }
        giros += giro_aux;



        cout << giros * 9 << endl;
        lee_linea(entrada);
    }
}
