#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long n; cin >> n;

    // one
    if (n == 1) { cout << "one"; return 0; }

    // sieve
    vector<bool> prime(70000, true);
    prime[0] = prime[1] = false;
    for (int i=4; i<70000; i+=2) prime[i] = false;
    for (int i=3; i*i<70000; i+=2) {
        if (!prime[i]) continue;
        for (int j=i*i; j<70000; j+=2) prime[j] = false;
    }

    // prime & composition
    if (n < 70000 && prime[n]) { cout << "prime"; return 0; }
    if (!(n & 1)) { cout << "composition"; return 0; }
    for (long long i=3; i*i<=n; i+=2) {
        if (!prime[i]) continue;
        if (!(n % i)) { cout << "composition"; return 0; }
    }
    cout << "prime";
    return 0;
}