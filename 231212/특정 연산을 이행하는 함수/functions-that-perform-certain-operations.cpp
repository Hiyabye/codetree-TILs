#include <iostream>
using namespace std;

int main() {
    int a, b, c; cin >> a >> b >> c;

    cout << (a & 1 ? 3*a-20 : a/2) << " ";
    cout << (b & 1 ? 3*b-20 : b/2) << " ";
    cout << (c & 1 ? 3*c-20 : c/2);
    return 0;
}