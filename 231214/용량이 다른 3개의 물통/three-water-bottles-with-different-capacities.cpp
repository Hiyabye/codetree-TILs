#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int> > v(3, vector<int>(2));
    for (int i=0; i<3; i++) for (int j=0; j<2; j++) cin >> v[i][j];

    for (int i=0; i<100; i++) {
        if (v[(i+1)%3][1] + v[i%3][1] <= v[(i+1)%3][0]) {
            v[(i+1)%3][1] += v[i%3][1];
            v[i%3][1] = 0;
        } else {
            v[i%3][1] -= v[(i+1)%3][0] - v[(i+1)%3][1];
            v[(i+1)%3][1] = v[(i+1)%3][0];
        }
    }

    for (int i=0; i<3; i++) cout << v[i][1] << "\n";
    return 0;
}