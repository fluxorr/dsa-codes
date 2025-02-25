#include <iostream>
using namespace std;

int main(){
    long long int p,q,r,s; cin >> p >> q >> r >> s;
    long long int mod = 100;
    long long int result = 1;

    result = (result * (p % mod)) % mod;
    result = (result * (q % mod)) % mod;
    result = (result * (r % mod)) % mod;
    result = (result * (s % mod)) % mod;

    if(result < 10){
        cout << '0' << result << endl;
    } else {
        cout << result << endl;
        }
}