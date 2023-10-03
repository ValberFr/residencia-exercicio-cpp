#include <iostream>
#include <string>
#include <regex>

using namespace std;

class Senha {
    public:
        static bool validaSenha (string senha) {
            regex senhaValida("(?=.*[a-z])(?=.*[A-Z])(?=.*[0-9])(?=.{8,})");

            return regex_match(senha, senhaValida);
        }
};

int main() {

    string senha;

    cout << "Digite sua senha: ";
    cin >> senha;

    if(Senha::validaSenha(senha)) {
        cout << Senha::validaSenha(senha) << endl;
    } else {
        cout << Senha::validaSenha(senha) << endl;
    }
}