#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n; cin >> n;
    vector<vector<int> > v(n, vector<int>(n));
    for (int i=0; i<n; i++) for (int j=0; j<n; j++) cin >> v[i][j];

    for (int i=0; i<n; i+=2) for (int j=0; j<n; j++) v[i][j] = 1;
    for (int i=1; i<n; i+=2) for (int j=0; j<n; j++) v[j][i] = 2;

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cout << v[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}