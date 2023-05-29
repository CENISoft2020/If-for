#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int opcion, num1, num2, num3, num4, edad;

    cout << "Punto A: Identificar la edad en el rango [18-25]" << endl;
    cout << "Ingrese su edad: ";
    cin >> edad;

    if (edad >= 18 && edad <= 25) {
        cout << "La edad ingresada está en el rango [18-25]." << endl;
    } else {
        cout << "La edad ingresada está fuera del rango [18-25]." << endl;
    }

    cout << "\nPunto B: Comparar un número con los anteriores" << endl;
    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;
    cout << "Ingrese el tercer número: ";
    cin >> num3;
    cout << "Ingrese el cuarto número: ";
    cin >> num4;

    if (num4 == num1 || num4 == num2 || num4 == num3) {
        cout << "El cuarto número es igual a al menos uno de los anteriores." << endl;
    } else {
        cout << "El cuarto número no coincide con ninguno de los anteriores." << endl;
    }

    cout << "\nPunto C: Menú de opciones" << endl;
    cout << "1. Calcular el cubo de un número." << endl;
    cout << "2. Verificar si un número es par o impar." << endl;
    cout << "3. Salir." << endl;
    cout << "Ingrese una opción: ";
    cin >> opcion;

    switch (opcion) {
        case 1:
            cout << "Ingrese un número: ";
            cin >> num1;
            cout << "El cubo de " << num1 << " es " << pow(num1, 3) << endl;
            break;
        case 2:
            cout << "Ingrese un número: ";
            cin >> num1;
            if (num1 % 2 == 0) {
                cout << "El número es par." << endl;
            } else {
                cout << "El número es impar." << endl;
            }
            break;
        case 3:
            cout << "Saliendo del programa..." << endl;
            break;
        default:
            cout << "Opción inválida." << endl;
            break;
    }

    return 0;
}

