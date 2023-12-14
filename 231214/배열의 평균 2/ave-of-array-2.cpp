#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    vector<vector<int> > v(3, vector<int>(3));
    for (int i=0; i<3; i++) for (int j=0; j<3; j++) cin >> v[i][j];

    for (int i=0; i<3; i++) cout << fixed << setprecision(1) << (double)(v[i][0]+v[i][1]+v[i][2])/3 << " ";
    cout << "\n";
    for (int i=0; i<3; i++) cout << fixed << setprecision(1) << (double)(v[0][i]+v[1][i]+v[2][i])/3 << " ";
    cout << "\n";

    int sum = 0;
    for (int i=0; i<3; i++) for (int j=0; j<3; j++) sum += v[i][j];
    cout << fixed << setprecision(1) << (double)sum / 9;

    return 0;
}