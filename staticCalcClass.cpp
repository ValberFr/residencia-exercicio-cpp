#include <iostream>
#include <string>

using namespace std;

class Calculadora {
    public:
        static double soma (double valor1, double valor2) {
            return valor1 + valor2;
        } 

        static double subtrai (double valor1, double valor2) {
            return valor1 - valor2;
        } 

        static double multiplica (double valor1, double valor2) {
            return valor1 * valor2;
        } 

        static double divide (double valor1, double valor2) {
            return valor1 / valor2;
        } 
};

int main() {

    double valor1, valor2;
    string operacao;

    cout << "Digite o primeiro valor: ";
    cin >> valor1;

    cout << "Digite o segundo valor: ";
    cin >> valor2;

    cout << "Digite a operação (somar, subtrair, multiplicar, dividir): ";
    cin >> operacao;

    while(true) {
        if(operacao == "somar") {
            cout << Calculadora::soma(valor1, valor2) << endl;
            return 0;
        } else if(operacao == "subtrair") {
            cout << Calculadora::subtrai(valor1, valor2) << endl;
            return 0;
        } else if(operacao == "multiplicar") {
            cout << Calculadora::multiplica(valor1, valor2) << endl;
            return 0;
        } else if(operacao == "dividir") {
            if(valor2 != 0) {
                cout << Calculadora::divide(valor1, valor2) << endl;
                return 0;
            } else {
                cout << "Não é possível dividir por 0!" << endl;
                return 0;
            }
            
        } else {
            cout << "Operação inválida, digite novamente: ";
            cin >> operacao;
        }
    }
}