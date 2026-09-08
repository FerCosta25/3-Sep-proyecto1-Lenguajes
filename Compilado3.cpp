#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

using namespace std;

int main() {
    vector<string> sucursales(25);
    vector<int> ventas(25);
    double suma = 0;

    for (int i = 0; i < 25; i++) {
        sucursales[i] = "Sucursal " + to_string(i + 1);
        ventas[i] = 1000 + rand() % 4001;
        suma += ventas[i];
    }

    double promedio = suma / 25.0;

    cout << "Promedio de ventas: " << promedio << endl;
    cout << "Sucursales por encima del promedio:" << endl;

    for (int i = 0; i < 25; i++) {
        if (ventas[i] > promedio) {
            cout << sucursales[i] << " - " << ventas[i] << endl;
        }
    }

    return 0;
}