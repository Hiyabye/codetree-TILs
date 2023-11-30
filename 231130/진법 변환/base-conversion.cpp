#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int power(int base, int exp) {
    if (exp == 0) return 1;
    if (exp == 1) return base;
    int half = power(base, exp/2);
    if (exp & 1) return half * half * base;
    else return half * half;
}

int main() {
    string n; int m;
    cin >> n >> m;
    reverse(n.begin(), n.end());

    int ans = 0;
    for (int i=0; i<n.length(); i++) {
        int x = (n[i] >= '0' && n[i] <= '9' ? n[i]-'0' : n[i]-'A'+10);
        ans += x * power(m, i);
    }

    cout << ans;
    return 0;
}