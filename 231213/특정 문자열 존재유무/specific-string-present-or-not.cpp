#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int n; string s; cin >> n >> s;
    vector<string> v(n);
    for (int i=0; i<n; i++) cin >> v[i];

    for (int i=0; i<n; i++) {
        if (v[i].find(s) != string::npos) {
            cout << v[i] << "\n";
        }
    }
    return 0;
}