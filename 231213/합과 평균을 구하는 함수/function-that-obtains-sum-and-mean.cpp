#include <iostream>
using namespace std;

int main() {
    double a, b, c; cin >> a >> b >> c;

    int sum = 0;
    sum += (int)(a + 0.5);
    sum += (int)(b + 0.5);
    sum += (int)(c + 0.5);

    cout << sum << "\n" << sum / 3;
    return 0;
}