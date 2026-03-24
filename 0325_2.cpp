#include <bits/stdc++.h>
using namespace std;

int main() {
    char a, b;
    cin >> a >> b;

    cout << a << " ";
    cout << (a == 'J' && b ==  'J' ? 'Q' : b) << "\n";
    return 0;
}