#include <bits/stdc++.h>
using namespace std;

int main() {
    int s, a, b, x;
    cin >> s >> a >> b >> x;

    int i = 0;
    int now_time = 0;
    int sum = 0;
    bool run = true;
    while (i <= x) {
        if (run) {
            sum += s;
            i++;
            if (i % a == 0) run = false;
        } else {
            i++;
            if (i % b == 0) run = true;
        }
    }
}