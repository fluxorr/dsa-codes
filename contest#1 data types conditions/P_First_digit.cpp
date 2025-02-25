#include <iostream>
using namespace std;


int main(){
    long int a; cin >> a;

    while(a>10){
        a = a/10;
    }

    if(a == 10){
        cout << "ODD" << endl;
    } else if(a%2 == 0 ){
        cout << "EVEN" << endl;
    } else{
        cout << "ODD" << endl;
    }

}