#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> v(n);
    for (int i=0; i<n; i++) cin >> v[i];

    int e = 0, o = 0;
    for (int i=0; i<n && v[i] != 0; i++) {
        if (v[i] & 1) o++;
        else e++;
    }
    cout << o << "\n" << e;
    return 0;
}