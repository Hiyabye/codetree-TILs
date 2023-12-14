#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n; cin >> n;
    vector<vector<char> > v(2*n-1, vector<char>(n, ' '));
    for (int i=0; i<n; i++) for (int j=i; j<i+n; j++) v[j][i] = '@';

    for (int i=0; i<2*n-1; i++) {
        for (int j=0; j<n; j++) {
            cout << v[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}