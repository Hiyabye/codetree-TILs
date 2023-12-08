#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n; cin >> n;

    vector<int> ans(10, 0);
    for (int i=0; i<n; i++) {
        int x; cin >> x;
        ans[x / 100]++;
    }

    for (int i=0; i<10; i++) {
        if (!ans[i]) continue;
        cout << i << " - " << ans[i] << "\n";
    }
    return 0;
}