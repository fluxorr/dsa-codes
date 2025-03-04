#include <bits/stdc++.h>
using namespace std;

// int main(){
//     int n; cin>> n;
//     cout << " " << endl;
//     for(int i = 0; i <=n; i++){
//         if(n%i == 0){
//             cout << i << " ";
//         }
//     }
// } 

// this above has complexity of O(n), can we do better???

/* ANOTHER APPROACH */

int main(){
    int n; cin >> n;
    cout << " " << endl;

    for(int i = 0; i <= sqrt(n); i++){
        if(n%i == 0){
            cout << i << " ";
            if(n/i != 1){
                cout << n/i << " ";
            }
        }
    }
    cout << endl;
}

/*  this new approach takes-> 
    O(sqrt(n)) + O(nlogn)
*/