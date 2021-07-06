#include<bits/stdc++.h>
using namespace std;
#define rep(start, i, n) for(int i = start; i < n; i++)
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    int a[n], dp[n];
    rep(0, i, n) {
        cin >> a[i];
    }
    dp[0] = 0;
    dp[1] = abs(a[0] - a[1]);
    rep(2, i, n) {
        dp[i] = min(abs(dp[i - 1] + abs(a[i] - a[i - 1])), abs(dp[i - 2] + abs(a[i] - a[i - 2])));
    }
    cout << dp[n - 1] << "\n";
    return 0;
}