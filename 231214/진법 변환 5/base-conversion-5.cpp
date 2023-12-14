#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int a, b; cin >> a >> b;
    string s = "";

    while (a) {
        s += (a & 1) + '0';
        a >>= 1;
    }

    string ans = "";
    if (b == 2) {
        ans = s;
    } else if (b == 8) {
        while (s.length() % 3) s += '0';
        for (int i=0; i<s.length(); i+=3) {
            ans += ((s[i]-'0')+(s[i+1]-'0')*2+(s[i+2]-'0')*4)+'0';
        }
    } else {
        while (s.length() % 4) s += '0';
        for (int i=0; i<s.length(); i+=4) {
            int val = (s[i]-'0') + (s[i+1]-'0')*2 + (s[i+2]-'0')*4 + (s[i+3]-'0')*8;
            ans += (val > 9 ? (char)(val-10+'a') : (char)(val+'0'));
        }
    }
    reverse(ans.begin(), ans.end());
    cout << ans;
    return 0;
}