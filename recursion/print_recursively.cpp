#include<bits/stdc++.h>
using namespace std;

void print(int a ){
    a = a + 1;
    cout << a<< endl;
    print(a);
}

int main(){
    print(1);
    return 0;
} 