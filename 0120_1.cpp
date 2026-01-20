#include <bits/stdc++.h>
using namespace std;

int main() {
    int s, a, b, x;
    cin >> s >> a >> b >> x;

    int sum = 0;
    bool flag = true;

    for (int i = 0; i <= x; i++) {
        if (flag) {
            if (i % a != 0) {
                sum += s * a;
            } else {
                flag = false;
            }
        } else {
            if (i % b == 0) {
                flag = true;
            }
        }
        }
    cout << sum << endl;


}