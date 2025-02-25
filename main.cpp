#include <iostream>
#include <string>
using namespace std;

bool check(int a, int b, int c, int d) {
    return (a + b + c == d) || (a * b * c == d) ||
           (a + b - c == d) || (a - b + c == d) || (a - b - c == d) ||
           (a * b + c == d) || (a + b * c == d) ||
           (a * b - c == d) || (a - b * c == d);
}

int main(){
     int a = 34688642, b = -851839419, c = 395784949, d = 490743112;

    if (check(a, b, c, d))
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
  }

