#include <iostream>
#include <string>
#define ASSENTO 40
#define QTD_VIAGENS_DIA 10
#define QTD_VIAGENS_MES 300

using namespace std;

struct Passageiro {
    string CPF;
    string nome;
    string idade;
};

struct Passagem {
    Passageiro passageiro;
    string origem;
    string destino;
    string data;
};

struct Viagem {
    Passagem passagem[ASSENTO];
};

int main() {


    return 0;
}