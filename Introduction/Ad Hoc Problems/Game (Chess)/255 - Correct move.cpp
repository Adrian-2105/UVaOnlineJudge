#include <iostream>

using namespace std;

int rey, reina1, reina2;

// fila -> casilla / 8
// columna -> casilla % 8

bool legal_move() {
    if (reina1 == reina2)
        return false;
    if (reina1 % 8 != reina2 % 8 && reina1 / 8 != reina2 / 8)
        return false;
    // Move vertical
    if (reina1 % 8 == reina2 % 8 && rey % 8 == reina1 % 8) {
        // Abajo
        if (reina1 / 8 < reina2 / 8) {
            if (rey / 8 >= reina1 / 8 && rey / 8 <= reina2 / 8)
                return false;
        }
        // Arriba
        else
            if (rey / 8 >= reina2 / 8 && rey / 8 <= reina1 / 8)
                return false;
    }
    // Move horizontal
    else if (rey / 8 == reina1 / 8) {
        // Derecha
        if (reina1 % 8 < reina2 % 8) {
            if (rey % 8 >= reina1 % 8 && rey % 8 <= reina2 % 8)
                return false;
        }
        // Izquierda
        else
            if (rey % 8 >= reina2 % 8 && rey % 8 <= reina1 % 8)
                return false;
    }
    return true;
}

bool mover_reina() {
    if (rey % 8 != 0)
        if (rey-1 == reina2)
            return false;
    if (rey % 8 != 7)
         if (rey+1 == reina2)
             return false;
    if (rey / 8 != 0)
        if (rey-8 == reina2)
            return false;
    if (rey / 8 != 7)
        if (rey+8 == reina2)
            return false;
    return true;
}

bool mover_rey() {
    if (rey % 8 != 0)
        if ((rey-1) % 8  != reina2 % 8)
            return true;
    if (rey % 8 != 7)
        if ((rey+1) % 8 != reina2 % 8)
            return true;
    if (rey / 8 != 0)
        if ((rey-8) / 8 != reina2 / 8)
            return true;
    if (rey / 8 != 7)
        if ((rey+8) / 8 != reina2 / 8)
            return true;
    return false;
}

int main() {
    while (cin >> rey >> reina1 >> reina2) {
        if (rey == reina1)
            cout << "Illegal state\n";
        else if (!legal_move())
            cout << "Illegal move\n";
        else if (!mover_reina())
            cout << "Move not allowed\n";
        else if (!mover_rey())
            cout << "Stop\n";
        else
            cout << "Continue\n";
    }
}