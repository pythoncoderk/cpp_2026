#include <bits/stdc++.h>
using namespace std;

int cube(int x) {
    return x * x * x;
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << cube(a) - cube(b) << endl;
    return 0;

}