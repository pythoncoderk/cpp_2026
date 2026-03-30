#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    size_t pos = 0;
    while ((pos = s.find("noaki", pos)) != string::npos) {
        s.replace(pos, 5, s.substr(pos, 0));
        pos += 1;
    }
    cout << s << "\n";
    return 0;
}