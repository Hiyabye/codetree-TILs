#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n; cin >> n;

    cout << fixed << setprecision(2) << (double)n*n*3.14;
    return 0;
}