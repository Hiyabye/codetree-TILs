#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> v(n);
    for (int i=0; i<n; i++) cin >> v[i];

    cout << v[2]+v[4]+v[7]-v[6];
    return 0;
}