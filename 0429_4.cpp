#include <bits/stdc++.h>
using namespace std;

int main() {
    int rain_count = 0;
    for (int i = 0; i < 7; i++) {
        string rain;
        cin >> rain;
        rain_count += (rain == "Rain");
    }
    cout << (rain_count >= 4 ? "Yes" : "No") << "\n";
    return 0;
}