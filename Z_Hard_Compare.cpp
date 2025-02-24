#include <bits/stdc++.h>
using namespace std;


int main(){
    long long int a,b,c,d;
    cin >> a >> b >> c >>d;

    double left = b* log(a);
    double right = d * log(c);

    if(left > right){
        cout << "YES" << endl;
    } else if(left <= right) {
        cout << "NO" << endl;
    } 

    


}
