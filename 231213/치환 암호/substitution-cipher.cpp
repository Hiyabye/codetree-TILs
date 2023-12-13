#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string s; getline(cin, s);
    vector<char> v(26);
    for (char c='a'; c<='z'; c++) {
        char p; cin >> p;
        v[p-'a'] = c;
    }

    for (char c : s) {
        cout << (c == ' ' ? ' ' : v[c-'a']);
    }
    return 0;
}