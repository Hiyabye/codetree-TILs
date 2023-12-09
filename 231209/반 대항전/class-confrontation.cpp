#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n; cin >> n;
    vector<vector<int> > v(4, vector<int>(n));

    string tmp;
    for (int i=0; i<4; i++) {
        cin >> tmp;
        for (int j=0; j<n; j++) {
            cin >> v[i][j];
        }
    }

    for (int i=0; i<4; i++) {
        for (int j=n-2; j>=0; j--) {
            v[i][j] += v[i][j+1];
        }
        cout << (char)('A'+i) << " - " << v[i][0] << "\n";
    }

    cout << "Class ";
    if (v[0][0] > v[1][0] && v[0][0] > v[2][0] && v[0][0] > v[3][0]) cout << "A";
    else if (v[1][0] > v[2][0] && v[1][0] > v[3][0]) cout << "B";
    else if (v[2][0] > v[3][0]) cout << "C";
    else cout << "D";
    cout << " is winner!";

    return 0;
}