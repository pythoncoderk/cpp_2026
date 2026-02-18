#include <bits/stdc++.h>
using namespace std;

int main() {
    char s1;
    string s2;
    cin >> s1 >> s2;
    int cnt = 0;
    for (int i = 0; i < s2.size(); i++) {
        if (s2[i] == s1) cnt++;
    }
    cout << cnt << "\n";
    return 0;
}