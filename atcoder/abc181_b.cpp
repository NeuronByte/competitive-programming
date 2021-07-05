#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    ll ans = 0;
    for(int i = 0; i < n; i++) {
        ll a, b;
        cin >> a >> b;
        ans += b*(b+1)/2 - a*(a-1)/2;
    }
    cout << ans << "\n";
    return 0;
}