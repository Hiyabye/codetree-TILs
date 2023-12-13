#include <iostream>
#include <string>
using namespace std;

int main() {
    string s; cin >> s;

    int n = s.length();
    for (int i=0; i<=n; i++) {
        for (int j=i; j<n; j++) cout << s[j];
        for (int j=0; j<i; j++) cout << s[j];
        cout << "\n";
    }
    return 0;
}