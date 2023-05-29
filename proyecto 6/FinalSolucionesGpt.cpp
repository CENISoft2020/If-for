#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int opcion, num1, num2, num3, num4, edad;

    cout << "Punto A: Identificar la edad en el rango [18-25]" << endl;
    cout << "Ingrese su edad: ";
    cin >> edad;

    if (edad >= 18 && edad <= 25) {
        cout << "La edad ingresada est� en el rango [18-25]." << endl;
    } else {
        cout << "La edad ingresada est� fuera del rango [18-25]." << endl;
    }

    cout << "\nPunto B: Comparar un n�mero con los anteriores" << endl;
    cout << "Ingrese el primer n�mero: ";
    cin >> num1;
    cout << "Ingrese el segundo n�mero: ";
    cin >> num2;
    cout << "Ingrese el tercer n�mero: ";
    cin >> num3;
    cout << "Ingrese el cuarto n�mero: ";
    cin >> num4;

    if (num4 == num1 || num4 == num2 || num4 == num3) {
        cout << "El cuarto n�mero es igual a al menos uno de los anteriores." << endl;
    } else {
        cout << "El cuarto n�mero no coincide con ninguno de los anteriores." << endl;
    }

    cout << "\nPunto C: Men� de opciones" << endl;
    cout << "1. Calcular el cubo de un n�mero." << endl;
    cout << "2. Verificar si un n�mero es par o impar." << endl;
    cout << "3. Salir." << endl;
    cout << "Ingrese una opci�n: ";
    cin >> opcion;

    switch (opcion) {
        case 1:
            cout << "Ingrese un n�mero: ";
            cin >> num1;
            cout << "El cubo de " << num1 << " es " << pow(num1, 3) << endl;
            break;
        case 2:
            cout << "Ingrese un n�mero: ";
            cin >> num1;
            if (num1 % 2 == 0) {
                cout << "El n�mero es par." << endl;
            } else {
                cout << "El n�mero es impar." << endl;
            }
            break;
        case 3:
            cout << "Saliendo del programa..." << endl;
            break;
        default:
            cout << "Opci�n inv�lida." << endl;
            break;
    }

    return 0;
}

