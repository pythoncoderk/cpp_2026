#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;

    int n = 1;

    while (n < x){
        n *= 2;

    }
    if (n == x) {
        cout << "OK" << endl;
    } else {
        cout << "NG" << endl;
    }
    return 0;
}