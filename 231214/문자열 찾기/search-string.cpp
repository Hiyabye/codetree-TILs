#include <iostream>
#include <string>
using namespace std;

int main() {
    string s; cin >> s;

    int a = 0, b = 0;
    for (int i=0; i<s.length()-2; i++) {
        if (s.substr(i, 3) == "KOI") a++;
        if (s.substr(i, 3) == "IOI") b++;
    }
    cout << a << " " << b;
    return 0;
}