#include <iostream>
using namespace std;

int main(){
    int pass; 

    while(true){
        cin>> pass;
        if(pass!= 1999){
            cout << "Wrong" << endl;
        }else {
            cout << "Correct" << endl;
            break;
        }
    }
}