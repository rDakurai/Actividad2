#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0)); 
    int numeros[10];
    int suma = 0;
    for (int i = 0; i < 10; i++) {
        numeros[i] = rand() % 100 + 1; 
        cout << "Número generado " << i + 1 << ": " << numeros[i] << endl;
        suma += numeros[i];
    }
    cout << "La suma es: " << suma << endl;
    cout << "El promedio es: " << suma / 10.0 << endl;
    return 0;
}   