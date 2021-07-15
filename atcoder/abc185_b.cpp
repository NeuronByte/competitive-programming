#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < n; i++)
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m, t;
    cin >> n >> m >> t;
    int bat = n;
    string ans = "Yes";
    int a = 0, b = 0;
    rep(i, m){
        cin >> a;
        bat = max(0, bat - a + b);
        if(bat == 0) ans = "No";
        cin >> b;
        bat = min(n, bat + b - a);
    }
    bat = max(0, bat - t + b);
    if(bat == 0) ans = "No";
    cout << ans << endl;
}
