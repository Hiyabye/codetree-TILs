#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

long long power(long long base, long long exp, long long mod) {
    long long ret = 1;
    while (exp) {
        if (exp & 1) ret = (ret * base) % mod;
        base = (base * base) % mod;
        exp >>= 1;
    }
    return ret;
}

long long gcd(long long a, long long b) {
    return b ? gcd(b, a % b) : a;
}

bool miller_rabin(long long n, long long a) {
    int r = 0;
    long long d = n-1;
    while (!(d & 1)) {
        r++;
        d >>= 1;
    }

    long long x = power(a, d, n);
    if (x == 1 || x == n-1) return true;
    for (int i=0; i<r-1; i++) {
        x = x * x % n;
        if (x == n-1) return true;
    }
    return false;
}

bool prime(long long n) {
    if (n <= 1) return false;
    if (n == 2 || n == 3) return true;
    if (!(n & 1)) return false;

    long long a[5] = {2, 3, 5, 7, 11};
    for (int i=0; i<5; i++) {
        if (n == a[i]) return true;
        if (!miller_rabin(n, a[i])) return false;
    }
    return true;
}

long long pollard_rho(long long n) {
    if (!(n & 1)) return 2;
    if (prime(n)) return n;

    long long x = rand() % (n-2) + 2;
    long long y = x;
    long long c = rand() % 10 + 1;
    long long d = 1;
    while (d == 1) {
        x = (x * x % n + c) % n;
        y = (y * y % n + c) % n;
        y = (y * y % n + c) % n;
        d = gcd(abs(x-y), n);
        if (d == n) return pollard_rho(n);
    }
    if (prime(d)) return d;
    else return pollard_rho(d);
}

int main() {
    int n; cin >> n;

    set<int> ans;
    ans.insert(1);
    while (n != 1) {
        int d = pollard_rho(n);
        set<int> tmp;
        for (auto it : ans) tmp.insert(it * d);
        for (auto it : tmp) ans.insert(it);
        n /= d;
    }

    for (auto it : ans) cout << it << " ";
    return 0;
}