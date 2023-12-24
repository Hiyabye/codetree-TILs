#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, p; cin >> n >> p;
    vector<int> v;
    v.push_back(n);

    int c = n;
    while (find(v.begin(), v.end(), c * n % p) == v.end()) {
        c = c * n % p;
        v.push_back(c);
    }
    cout << v.end() - find(v.begin(), v.end(), c * n % p);

    return 0;
}