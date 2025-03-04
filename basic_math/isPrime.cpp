#include <bits/stdc++.h>
using namespace std;

/*The brute force method O(N) */ 

// int main(){
//     int n;cin>> n;
//     int counter = 0;

//     for(int i = 0; i<= n;i++ ){
//         if(n % i == 0){
//             counter++;
//         }
//     }
//     if(counter == 2){
//         cout << "PRIME" << endl;
//     } else{
//         cout << "NOPE" << endl;
//     }
// }

/*The optimized and mathematical approach O(sqrt(n))*/

int main(){
    int n; cin>> n;
    int counter = 0;

    for(int i = 0; i*i <= n;i++){
        if(n%i == 0){
            counter++;
            if(n/i != 1){
                counter++;
            }
        } 
    }
    if(counter == 2){
            cout << "PRIME" << endl;
        } else{
            cout << "NOPE" << endl;
        }
}
