#include <iostream>
using namespace std;

int main(){
    long int x,y,z; cin >> x >> y >> z ;

    if(x>y) swap(x,y);
    if(x>z) swap(x,z);
    if(y>z) swap(y,z);

    cout << x << ' ' << z << endl;
}