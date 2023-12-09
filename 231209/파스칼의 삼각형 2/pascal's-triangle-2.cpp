#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n; cin >> n;
    vector<vector<int> > v(n, vector<int>(n, 2));
    for (int i=1; i<n; i++) {
        for (int j=1; j<i; j++) {
            v[i][j] = v[i-1][j-1] + v[i-1][j];
        }
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<=i; j++) {
            cout << v[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}