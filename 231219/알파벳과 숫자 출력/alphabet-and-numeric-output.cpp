#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n; cin >> n;
    vector<vector<char> > v(n, vector<char>(n+1));

    char c = 'A';
    for (int i=0; i<n; i++) {
        for (int j=0; j<n-i; j++) {
            v[i][j] = c;
            c = (c-'A'+1)%26+'A';
        }
    }
    
    c = '1';
    for (int i=0; i<n; i++) {
        for (int j=n-i; j<n+1; j++) {
            v[i][j] = c;
            c = (c-'1'+1)%9+'1';
        }
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<n+1; j++) {
            cout << v[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}