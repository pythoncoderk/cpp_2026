#include <bits/stdc++.h>
using namespace std;

int main() {
    long long power(long long a, int b) {
        long long res = 1;
        for (int i = 0; i < b; i++) {
            res *= a;
        }
    }
    return res;
}

int a, b;
cin << a << b;

long long x = power(long long a, int b) {}