#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int eye, mouth, body, doll = 0;
    cin >> eye >> mouth >> body;

    while (body != 0) {
        if (mouth <= eye && mouth <= body) {
            doll += mouth;
            body -= mouth;
            eye -= mouth;
            mouth = 0;
        } else {
            doll += eye;
            body -= eye;
            mouth -= eye;
            eye = 0;
        }

        long long int _doll = eye / 2;

        if (_doll >= body) {
            doll += body;
        } else {
            doll += _doll;
        }
        break;
    }

    cout << doll << endl;

    return 0;
}


