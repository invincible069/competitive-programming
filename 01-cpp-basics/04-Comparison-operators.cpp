#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cout << "Enter first number: ";
    cin >> a;
    int b;
    cout << "Enter second  number ";
    cin >> b;
    cout << (a < b && b > 15) << endl;
cout << (a > b || b == 20) << endl;
cout << !(a == b) << endl;
cout << (a > 5 && b < 15) << endl;
cout << !(a < b) << endl;
}