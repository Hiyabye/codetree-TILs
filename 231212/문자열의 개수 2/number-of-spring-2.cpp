#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string s; cin >> s;
    vector<string> v;
    while (s != "0") {
        v.push_back(s);
        cin >> s;
    }

    cout << v.size() << "\n";
    for (int i=1; i<v.size(); i+=2) {
        cout << v[i] << "\n";
    }
    return 0;
}