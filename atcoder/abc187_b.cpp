#include<bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
#define rep2(i, s, n) for(int i = s; i < n; i++)
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int x[n], y[n];
    rep(i, n) 
        cin >> x[i] >> y[i];
    int ans = 0;
    rep(i, n){
        rep2(j, i + 1, n){
            if(abs(x[i] - x[j]) >= abs(y[i] - y[j])) 
                ans++;
        }
    }
    cout << ans << endl;
}
