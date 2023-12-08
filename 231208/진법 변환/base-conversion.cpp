#include <iostream>
#include <string>
using namespace std;

int main() {
    string n; int m; cin >> n >> m;

    long long ans = 0, base = 1;
    for (int i=n.length()-1; i>=0; i--) {
        ans += base * (n[i] - '0');
        base *= m;
    }
    cout << ans;
    return 0;
}