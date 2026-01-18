#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int i = 0;
    int cnt = 0;
    bool flag = true;
    int sum = 0;
    while (true) {
        if (flag) {
            sum += a * (b + cnt);
            flag = false;
            i++;
            cnt += b;
        } else {
            flag = true;
            cnt += c;
            i++;
        }
    }
}