#include <iostream>
using namespace std;

int main() {
    int a, b, c; cin >> a >> b >> c;

    int ans = 1;
    if (a & 1) ans *= a;
    if (b & 1) ans *= b;
    if (c & 1) ans *= c;
    if (ans == 1 && a != 1 && b != 1 && c != 1) ans *= a * b * c;

    cout << ans;
    return 0;
}

// 2 4 1