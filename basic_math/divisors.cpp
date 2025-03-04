#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>> n;
    cout << " " << endl;
    for(int i = 0; i <=n; i++){
        if(n%i == 0){
            cout << i << " ";
        }
    }
}