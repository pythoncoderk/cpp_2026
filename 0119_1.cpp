#include <bits/stdc++.h>
using namespace std;

int main() {
    string x, y;
    cin >> x >> y;

    int xx = 0;
    int yy = 0;

    vector<string> v = {"Ocelot", "Serval", "Lynx"};


    for (int i = 0; i < v.size(); i++) {
        if (v[i] == x) xx = i;
    }


    for (int i = 0; i < v.size(); i++) {
        if (v[i] == y) yy = i;
    }


    if (xx >= yy) cout << "Yes" << endl;
    else cout << "No" << endl;
}