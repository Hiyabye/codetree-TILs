#include <iostream>
using namespace std;

int main() {
    int n, m; cin >> n >> m;

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) cout << (i & 1 ? (i+1)*m-j : i*m+j+1) << " ";
        cout << "\n";
    }
    return 0;
}