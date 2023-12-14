#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> cnt(9, 0);

    while (n--) {
        int x; cin >> x;
        cnt[x]++;
    }

    for (int i=1; i<=8; i++) {
        cout << i << " - " << cnt[i] << "\n";
    }
    return 0;
}