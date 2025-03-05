#include <bits/stdc++.h>
using namespace std;

// O(min(n1,n2))
// int main(){
//     int n1,n2,gcd; cin>> n1 >> n2 ;
//     if (n1 > n2) {
//         swap(n1, n2); // this shit makes sure that we always put the smaller number in the loop
//     }
//     for(int i = 1; i<n1; i++ ){
//         if(n1% i == 0 && n2 % i == 0){
//             gcd =i;
//         }
//     }

//     cout << gcd << endl;
// } 


// With euclidean algorith m (better time compl)

int main(){
    int n1, n2,gcd; cin>> n1 >>n2; 

    while(n1 > 0 && n2 >0 ){
        if(n1 > n2) n1 = n1 % n2;
        else n2 = n2 % n1;
            
    }
    
    if(n1 == 0){
        gcd = n2;
    }
    if(n2 == 0){
        gcd = n1;
    }
    cout << gcd << endl;
}