#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    cout << argc << endl <<"Bom dia " 
    << argv[1] << ", sua idade eh: " 
    << (2023 - atoi(argv[2])) << " anos!" << endl;

    return 0;
}