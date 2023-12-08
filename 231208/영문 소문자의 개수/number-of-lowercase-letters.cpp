#include <iostream>
#include <map>
using namespace std;

int main() {
    int n; cin >> n;

    bool ok = true;
    map<char, int> mp;
    for (int i=0; i<n-1; i++) {
        char c; cin >> c;
        if (c < 'a' || c > 'z') ok = false;
        else if (ok) mp[c]++;
    }

    for (auto it=mp.begin(); it!=mp.end(); it++) {
        cout << it->first << " : " << it->second << "\n";
    }
    return 0;
}