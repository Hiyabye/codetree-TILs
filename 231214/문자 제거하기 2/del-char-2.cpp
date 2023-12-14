#include <iostream>
#include <string>
using namespace std;

int main() {
    string a; int n; cin >> a >> n;
    while (n--) {
        int x; cin >> x;
        if (x > a.length()) continue;
        a = a.substr(0, x-1) + (x != a.length() ? a.substr(x) : "");
        cout << a << "\n";
    }
    return 0;
}