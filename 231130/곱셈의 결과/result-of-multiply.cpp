#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 1;
    for (int i=0; i<3; i++) {
        int x; cin >> x;
        n *= x;
    }

    vector<int> cnt(10, 0);
    while (n > 0) {
        cnt[n % 10]++;
        n /= 10;
    }

    for (int i=0; i<10; i++) cout << cnt[i] << "\n";
    return 0;
}