#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    if (s.size() >= 5 && s.substr(s.size() - 5) == "noaki") {
        cout << s.substr(0, s.size()-5) << "\n";

    }
    return 0;
    }