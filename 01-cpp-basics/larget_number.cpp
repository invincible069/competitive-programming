#include <bits/stdc++.h>
using namespace std;

int main() {
  cout << " Enter three numbers to find the largest among them:" << endl;
    int a,b,c;
    cin >> a >> b >> c;
    if ( a>b && a>c) {
         cout << "the largest number is " << a << endl;
    }
    else if ( b>a && b>c) {
         cout << "the largest number is"  << b <<  endl;

    }
    else if (c>a && c>b) {
        cout << " the largest number is "  << c << endl;

    }
    else if ( a==b && a>c) {
        cout << " both " << a << " and " << b << " are equal and the largest number" << endl;
    }
   else if ( a==c && a>b) {
        cout << " both " << a << " and " << c << " are equal and the largest number" << endl;
    }
    else if ( c==b && c>a) {
        cout << " both " << c << " and " << b << " are equal and the largest number" << endl;
    }

    else {
        cout << " All the numbers are equal" << endl;
    }

}