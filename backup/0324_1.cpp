#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    vector<string> v = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J" };
    for (int i = 0; i < a; i++) cout << v[i];
    cout << "\n";
    for (int i = a; i < a + b; i++) cout << v[i];
    cout << "\n";
    for (int i = a + b; i < v.size(); i++) cout << v[i];
    cout << "\n";
}