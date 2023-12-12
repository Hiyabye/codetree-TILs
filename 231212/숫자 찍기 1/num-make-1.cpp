#include <iostream>
using namespace std;

void one(int n) {
    for (int i=0; i<n; i++) {
        if (i & 1) for (int j=(i+1)*(i+2)/2; j>i*(i+1)/2; j--) cout << j << " ";
        else for (int j=i*(i+1)/2+1; j<(i+1)*(i+2)/2+1; j++) cout << j << " ";
        cout << "\n";
    }
}

void two(int n) {
    for (int i=0; i<n; i++) {
        for (int j=0; j<i*2; j++) cout << " ";
        for (int j=0; j<(n-i)*2-1; j++) cout << i << " ";
        cout << "\n";
    }
}

void three(int n) {
    for (int i=1; i<=(n+1)/2; i++) {
        for (int j=1; j<=i; j++) cout << j << " ";
        cout << "\n";
    }
    for (int i=(n-1)/2; i>=1; i--) {
        for (int j=1; j<=i; j++) cout << j << " ";
        cout << "\n";
    }
}

int main() {
    int a, b; cin >> a >> b;

    if (b == 1) one(a);
    else if (b == 2) two(a);
    else three(a);
    return 0;
}