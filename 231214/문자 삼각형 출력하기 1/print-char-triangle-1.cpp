#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n; cin >> n;
    vector<vector<char> > v(n, vector<char>(n, ' '));

    char c = 'A';
    for (int i=n-1; i<2*n-1; i++) {
        for (int j=n-1; j>=i-n+1; j--) {
            v[i-j][j] = c;
            c = (char)(c-'A'+1)%26+'A';
        }
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cout << v[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}