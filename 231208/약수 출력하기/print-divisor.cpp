#include <iostream>
#include <set>
using namespace std;

int main() {
    int n; cin >> n;

    set<int> p;
    for (int i=1; i*i<=n; i++) {
        if (n % i) continue;
        p.insert(i);
        p.insert(n / i);
    }

    for (auto it=p.begin(); it!=p.end(); it++) {
        cout << *it << " ";
    }
    return 0;
}