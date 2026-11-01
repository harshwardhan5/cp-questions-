//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void solve() {
    int n, m;
    string p, q;
    cin >> n >> m >> p >> q;

    int d[26] = {};
    for (char c : p) d[c - 'a']++;
    for (char c : q) d[c - 'a']--;

    for (int i = 0; i < 26; i++) {
        char c = 'a' + i;
        int need = (c == 's' || c == 'i' || c == 'x') ? 1 : 0;
        if (d[i] != need) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}