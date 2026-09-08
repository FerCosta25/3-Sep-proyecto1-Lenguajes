#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int pares = 0;
    int impares = 0;

    for (int i = 0; i < 500; i++) {
        int val = 50 + rand() % (100 - 50 + 1);
        if (val % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    cout << "Pares: " << pares << endl;
    cout << "Impares: " << impares << endl;

    return 0;
}