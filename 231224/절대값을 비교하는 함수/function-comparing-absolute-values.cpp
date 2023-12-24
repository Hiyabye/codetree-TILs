#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n; cin >> n;

    while (n--) {
        int a, b; cin >> a >> b;
        cout << (abs(a) > abs(b) ? abs(a) : abs(b)) << "\n";
    }
    return 0;
}