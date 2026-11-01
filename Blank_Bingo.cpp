#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

using ll = long long;

void solve() {
    vector<vector<char>> s(5, vector<char>(5));

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> s[i][j];
        }
    }

    ll ans = 5;

for (int i = 0; i < 5; i++) {
    ll rowCnt = 0;
    ll colCnt = 0;

    for (int j = 0; j < 5; j++) {
        if (s[i][j] == '.') rowCnt++;
        if (s[j][i] == '.') colCnt++;
    }

    ans = min({ans, rowCnt, colCnt});
}

ll diag1 = 0, diag2 = 0;

for (int i = 0; i < 5; i++) {
    if (s[i][i] == '.') diag1++;
    if (s[i][4 - i] == '.') diag2++;
}

ans = min({ans, diag1, diag2});
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t=1;
   // cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}