#include <iostream>
using namespace std;

int main(){
    int a,b;
    char s;
    bool result;

    cin >> a >> s >> b ;

   
    if ((s == '<' && a < b) || (s == '>' && a > b) || (s == '=' && a == b)) {
        cout << "Right" << endl;
    } else {
        cout << "Wrong" << endl;
    }
}