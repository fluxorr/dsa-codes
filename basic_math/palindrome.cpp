#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,digit; cin>>n;
    int reverse = 0;
    int temp = n;

    while(n>0){
        digit = n%10;
        reverse = (reverse*10) + digit;
        n = n /10;
    }

    if(temp == reverse){
        cout << "True" << endl;
    }else {
        cout << "False" << endl;
    }
}
