#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> cnt(101, 0);
    while (n--) {
        int x; cin >> x;
        cnt[x]++;
    }

    for (int i=100; i>=1; i--) {
        for (int j=0; j<cnt[i]; j++) {
            cout << i << " ";
        }
    }
    return 0;
}