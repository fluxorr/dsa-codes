#include <iostream>
#include <iomanip>  
using namespace std;

int main(){
    float disc, pad,pbd;
    cin >> disc >>  pad;

    // out price before discount
    pbd = (pad / (1 - (disc / 100)));
    cout << fixed << setprecision(2) << pbd << endl;

}