#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

int main() {
    srand(time(0));
    const int N = 25;
    string sucursales[N];
    int ventas[N];
    int suma = 0;
    for (int i = 0; i < N; i++) {
        sucursales[i] = "Sucursal " + to_string(i + 1);
        ventas[i] = rand() % 9001 + 1000; 
        suma += ventas[i];
    }
    double promedio = suma / (double)N;
    cout << fixed << setprecision(2);
    cout << "Promedio de ventas: " << promedio << endl;
    cout << "Sucursales con ventas mayores al promedio:" << endl;
    for (int i = 0; i < N; i++) {
        if (ventas[i] > promedio) {
            cout << sucursales[i] << ": " << ventas[i] << endl;
        }
    }
    return 0;
}