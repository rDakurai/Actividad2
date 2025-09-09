#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0)); 
    int numeros[500];
    int pares = 0;
    int impares = 0;
    for (int i = 0; i < 500; i++) {
        numeros[i] = rand() % (100 - 50 + 1) + 50; 
        printf("Número generado %d: %d\n", i + 1, numeros[i]);
        if (numeros[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }
    cout << "La cantidad de números pares es: " << pares << endl;
    cout << "La cantidad de números impares es: " << impares << endl;
    return 0;
}