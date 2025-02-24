#include <iostream>
using namespace std;

int main(){
    int A, B, C, result;
    char Q,S;

    cin >> A >> S >> B >> Q >> C;

    if (S == '+'){
        result = A+B;
    }
    if (S== '-'){
        result = A - B;
    }
    if( S == '*'){
        result = A * B;
    }

    if(result == C){
        cout << "Yes" << endl;
    } else {
        cout << result << endl;
    }

}