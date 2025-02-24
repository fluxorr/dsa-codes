#include <iostream>
#include <string>
using namespace std;

int main(){
  int a; 
  cout << "Enter the number ";
  cin >> a;
  cout << "The number is " << a << endl;

  while(a>10){
    a = a / 10;
  }

  cout << "now " << a << endl;

  }

