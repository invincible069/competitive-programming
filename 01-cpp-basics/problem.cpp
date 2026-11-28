#include <bits/stdc++.h>
using namespace std;
int main() {
    #include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int even = 0;
    int odd = 0;
    int i = 1;

    while (i <= n) {
        if (i % 2 == 0) {
            even++;
        }
        else {
            odd++;
        }

        i++;
    }

    cout << "Even numbers: " << even << endl;
    cout << "Odd numbers: " << odd << endl;

    return 0;

}