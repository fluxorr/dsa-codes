#include <iostream>
using namespace std;

int main(){
    char a; cin >> a;
    int next = int(a+1);

    if(a == 'z'){
        cout << 'a' << endl;
    }else{
        cout << char(next) << endl;
    }
}