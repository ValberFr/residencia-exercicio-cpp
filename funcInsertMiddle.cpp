#include <iostream>
#include <vector>

using namespace std;

int insere_meio(int *vetor) {
    return *vetor;
}

int main() {

    int vetor[] = {10, 4, 15, 2, 3, 1};
    //int max = vetor[0], min = vetor[0], size = 0;

    /*for(int i : vetor) {
        size++;
    }*/

    //maxmin(vetor, size, 100);

    cout << insere_meio(vetor) << endl;
    return 0;
}