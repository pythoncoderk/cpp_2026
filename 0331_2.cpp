#include <bits/stdc++.h>
using namespace std;

int main() {
    int total = 0;
    for (int i = 0; i < 7; i++) {
        int n;
        cin >> n;
        if (n <= 30) total++;
    }
    cout << total << endl;
    return 0;
}