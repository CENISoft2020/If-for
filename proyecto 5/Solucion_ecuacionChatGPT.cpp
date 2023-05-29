#include <iostream>
using namespace std;

int main() {
  float a, b, c, d, e, f; // declarando las variables
  float nota1, nota2, nota3;

  // solicitando al usuario que ingrese los valores para las variables
  cout << "Ingrese el valor de a: ";
  cin >> a;
  cout << "Ingrese el valor de b: ";
  cin >> b;
  cout << "Ingrese el valor de c: ";
  cin >> c;
  cout << "Ingrese el valor de d: ";
  cin >> d;
  cout << "Ingrese el valor de e: ";
  cin >> e;
  cout << "Ingrese el valor de f: ";
  cin >> f;

  // calculando la nota 1
  nota1 = ((a + b/c)/(d + e/f)) * 10;

  // calculando la nota 2
  float VX = nota1;
  nota2 = (VX + 100)/2 * 3;

  // calculando la nota 3
  float VY = nota2;
  nota3 = (VY + 200)/3 * 6;

  // calculando la nota final
  float notaFinal = nota1 * 0.3 + nota2 * 0.1 + nota3 * 0.6;

  // mostrando los resultados
  cout << "Nota 1: " << nota1 << endl;
  cout << "Nota 2: " << nota2 << endl;
  cout << "Nota 3: " << nota3 << endl;
  cout << "Nota Final: " << notaFinal << endl;

  return 0;
}

