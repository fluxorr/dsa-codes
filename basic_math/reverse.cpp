#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,digit; cin>>n;
    int reverse = 0;

    while(n>0){
        digit = n%10;
        reverse = (reverse*10) + digit;
        n = n /10;
    }

    cout << reverse << endl;
}
