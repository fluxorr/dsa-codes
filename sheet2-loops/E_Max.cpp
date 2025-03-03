#include <iostream>
using namespace std;


int main(){
    int n;
    cin >> n;
    long long int max_val = LLONG_MIN;
    for (int i = 0; i < n; ++i) {
        long long int x;
        cin >> x;
        if (x > max_val) {
            max_val = x;
        }
    }
    cout << max_val << endl;

    
}