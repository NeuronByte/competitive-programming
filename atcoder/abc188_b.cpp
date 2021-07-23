#include<bits/stdc++.h>
using namespace std;
#define rep(a, n) for(int i = a; i < n; i++)
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, sum = 0;
    cin >> n;
    vector<int> a(n), b(n);
    rep(0, n)
        cin >> a[i];
    rep(0, n)
        cin >> b[i];
    rep(0, n)
        sum += a[i]*b[i];
    (sum == 0) ? cout << "Yes" : cout << "No";
}
