#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double N;
    cin >> N;

    int intPart = static_cast<int>(N);  // integer part
    double decimalPart = N - intPart;   // decimal part
    
    if (decimalPart == 0) {
        cout << "int " << intPart << endl;
    } else {
        cout << "float " << intPart << " " << decimalPart << endl;
    }

    return 0;
}
