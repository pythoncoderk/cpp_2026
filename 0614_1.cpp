#include <bits/stdc++.h>
using namespace std;

int main() {
    char s1;
    string s2;
    cin >> s1 >> s2;

    int count = 0;
    for (char c : s2) {
        if (c == s1){
            count++;
        }
    }
    cout << count << "\n";
    return 0;
}