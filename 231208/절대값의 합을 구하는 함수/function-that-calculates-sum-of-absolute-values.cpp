#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    
    int ans = 0;
    while (n--) {
        int x; cin >> x;
        ans += (x > 0 ? x : -x);
    }

    cout << ans;
    return 0;
}