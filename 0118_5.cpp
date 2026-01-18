#include <bits/stdc++.h>
using namespace std;

int main() {
    int s, a, b, x;
    cin >> s >> a >> b >> x;

    int sum = 0;
    int cnt = 0;
    bool flag = true;
    for (int i = 0; i <= x; i++) {
        if (flag) {
            for (int j = 0; j < a; j++) {
                if (cnt > x-1) {
                    cout << sum << endl;
                    return 0;
                } else {
                  sum += s;
                    cnt++;
                }
            }
            flag = false;
        } else {
            for (int j = 0; j < b; j++) {
                if (cnt > x-1) {
                    cout << sum << endl;
                    return 0;
                } else {

                    cnt++;
                }
            }
            flag = true;
        }
    }


}