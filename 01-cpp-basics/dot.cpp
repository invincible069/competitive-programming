#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    
    n=5;
     for ( int i=1 ; i<=5 ; i++) {
        for ( int j=0 ; j<=n-i ; j++) {
            cout << " ";
        }
        for ( int k=1 ; k<=2*i-1 ; k++ ) {
            cout << "*";
        }
        for ( int m=0 ; m<=n-i ; m++) {
            cout << " ";
        }
        cout << endl;
     }
}