#include <bits/stdc++.h>
using namespace std;

int main(){
    int h, m;
    char c;
    cin >> h >> c >> m;
    cout << (h + 16) % 24 << ":" << m << endl;
}