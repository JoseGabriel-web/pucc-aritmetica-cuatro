#include <vector>
#include <iostream>
using namespace std;
#include <algorithm>
#include <numeric>

int main()
{

    while (true)
    {
        cout << "PROMEDIO DE N NÚMEROS" << endl;

        int n;
        cout << "Porfavor Ingrese la cantidad de numeros (N): " << endl;
        cin >> n;
        int numeros[n];
        int suma = 0;

        for (int i = 0; i < n; i++)
        {
            cout << "Porfavor ingresar un numero: ";
            cin >> numeros[i];
        }

        cout << "La media de los numeros: ";

        for (int i = 0; i < n; i++)
        {
            cout << numeros[i] << ", ";
            suma += numeros[i];
        }

        cout << "es " << suma / n << ". ";

        string repetir;
        cout << "Desea repetir? si o no ";
        cin >> repetir;

        if (repetir == string("no"))
        {
            return 0;
        }
    }
}