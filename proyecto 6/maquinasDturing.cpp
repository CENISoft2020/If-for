#include <iostream>
#include <vector>

using namespace std;

// Clase que representa la cinta de la máquina de Turing
class Tape {
private:
    vector<char> tape;
    int head;

public:
    Tape() {
        head = 0;
    }

    void write(char symbol) {
        tape[head] = symbol;
    }

    char read() {
        return tape[head];
    }

    void moveLeft() {
        head--;
    }

    void moveRight() {
        head++;
        if (head == tape.size())
            tape.push_back('_'); // Añadir un símbolo vacío al final de la cinta si llegamos al final
    }

    void display() {
        for (size_t i = 0; i < tape.size(); i++)
            cout << tape[i];
        cout << endl;
    }
};

// Función que simula el comportamiento de la máquina de Turing
void runTuringMachine() {
    Tape tape;
    string input;
    int currentState = 0;

    cout << "Ingrese la entrada inicial: ";
    cin >> input;

    // Escribir la entrada inicial en la cinta
    for (size_t i = 0; i < input.size(); i++)
        tape.write(input[i]);

    while (true) {
        char symbol = tape.read();

        // Definir las transiciones de la máquina de Turing
        switch (currentState) {
            case 0:
                if (symbol == '0') {
                    tape.write('1');
                    tape.moveRight();
                    currentState = 1;
                } else if (symbol == '1') {
                    tape.write('0');
                    tape.moveLeft();
                    currentState = 2;
                } else {
                    // Estado de aceptación
                    tape.display();
                    return;
                }
                break;
            case 1:
                if (symbol == '0') {
                    tape.write('1');
                    tape.moveLeft();
                    currentState = 0;
                } else if (symbol == '1') {
                    tape.moveRight();
                    currentState = 1;
                } else {
                    // Estado de aceptación
                    tape.display();
                    return;
                }
                break;
            case 2:
                if (symbol == '0') {
                    tape.moveLeft();
                    currentState = 2;
                } else if (symbol == '1') {
                    tape.moveLeft();
                    currentState = 0;
                } else {
                    // Estado de aceptación
                    tape.display();
                    return;
                }
                break;
        }
    }
}

int main() {
    cout << "Simulación de Máquina de Turing" << endl;
    runTuringMachine();
    return 0;
}

