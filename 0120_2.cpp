#include <bits/stdc++.h>
using namespace std;

int main() {
    int s, a, b, x;
    cin >> s >> a >> b >> x;

    int sum = 0;
    int time = 0;
    bool flag = true;

    for (int i = 0; i < x; i++) {
        if (flag) {
            for (int j = 0; j < a; j++) {

                sum += s;
                time++;
                if (time >= x) {
                    cout << sum << endl;
                    return 0;
                }
            }
            flag = false;

        } else {
            for (int k = 0; k < b; k++) {
                time++;
                if (time >= x) {
                    cout << sum << endl;
                    return 0;
                }
                continue;
            }
            flag = true;
        }


    }

}