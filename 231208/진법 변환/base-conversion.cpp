#include <iostream>
#include <string>
using namespace std;

int main() {
    string n; int m; cin >> n >> m;

    int ans = 0;
    for (int i=n.length()-1, base=1; i>=0; i--) {
        ans += base * (n[i]-'0');
        base *= m;
    }

    cout << ans;
    return 0;
}