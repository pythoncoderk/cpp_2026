#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    vector<string> v = {s1, s2, s3};

    int cat = 0;
    int dog = 0;

    for (int i = 0; i < v.size(); i++) {
        (v[i] == "cat" ? cat++ : dog++);
    }
    cout << (cat > dog ? "cat" : "dog") << "\n";
    return 0;
}