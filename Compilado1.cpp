#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    double suma = 0;

    for (int i = 0; i < 10; i++) {
        int val = 1 + rand() % 100;
        suma += val;
    }

    cout << "Suma: " << suma << endl;
    cout << "Promedio: " << suma / 10.0 << endl;

    return 0;
}