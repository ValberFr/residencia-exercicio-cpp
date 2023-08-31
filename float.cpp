#include <limits>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <iostream>

using namespace std;

int main(void) {
    float pif = 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280;
    
    cout << "Menor float:" << numeric_limits<float>::min() << endl;
    cout << "Maior float:" << numeric_limits<float>::max() << endl;
    cout << "Pi:" << setprecision(20) << pif << endl;

    return 0;
}