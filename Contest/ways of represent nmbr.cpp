#include <bits/stdc++.h>
using namespace std;
#define mx 100000
int main() {
    int arr[mx];
    int n, t1 = 0, t2 = 1, nextTerm = 0;

   // cout << "Enter the number of terms: ";
    cin >> n;

   // cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; ++i) {
        // Prints the first two terms.
        if(i == 1) {
            cout << t1 << " ";
            continue;
        }
        if(i == 2) {
            cout << t2 << " ";
            continue;
        }
        arr[i] = t1 + t2;
        t1 = t2;
        t2 = arr[i];


        cout <<arr[i] << " ";

}
}
