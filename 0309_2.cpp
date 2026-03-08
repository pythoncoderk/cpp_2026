#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;


    string s1 = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ':') break;
        else s1 += s[i];
    }

    int n = (stoi(s1) - 8) % 24;
    int ans = (n < 0 ? n + 24 : n);

    auto it = find(s.begin(), s.end(), ':');
    int index = it - s.begin();

    cout << ans << s.substr(index) << "\n";
    return 0;




}