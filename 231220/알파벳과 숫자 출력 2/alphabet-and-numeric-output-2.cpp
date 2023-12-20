#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n; cin >> n;
    vector<vector<char> > v(n+1, vector<char>(n));

    char c = 'A';
    for (int i=0; i<n; i++) {
        for (int j=0; j<n-i; j++) {
            v[i][j] = c;
            c = (c-'A'+1) % 26 + 'A';
        }
    }

    c = '0';
    for (int i=1; i<n+1; i++) {
        for (int j=n-i; j<n; j++) {
            v[i][j] = c;
            c = (c-'0'+1) % 10 + '0';
        }
    }

    for (int i=0; i<n+1; i++) {
        for (int j=0; j<n; j++) {
            cout << v[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}