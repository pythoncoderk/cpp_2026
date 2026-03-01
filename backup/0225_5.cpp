#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    set<char> st(s.begin(), s.end());

    cout << (st.size() == 4 ? "OK\n" : "NG\n");
    return 0;
}