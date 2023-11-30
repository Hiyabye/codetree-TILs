#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    while (n--) {
        int x; cin >> x;
        cout << (x < 0 ? "minus" : (x > 0 ? "plus" : "zero")) << "\n";
    }
    return 0;
}