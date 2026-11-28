#include <bits/stdc++.h>
using namespace std;
int main() {
   int b;
   cout<<"Enter first number :" ;
   cin >> b;
   
    int a;
    cout <<"Enter last number number :" ;
    cin >> a;
int sum = b;

for (int i = b; i <= a; i++) {
    sum = sum + i;
}
cout << "Sum of numbers from " << b << " to " << a << " is: " << sum << endl;
return 0;
}