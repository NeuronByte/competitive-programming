#include<bits/stdc++.h>
using namespace std;
#define rep(start, i, n) for(int i = start; i < n; i++)
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    int a[n];
    rep(0, i, n) cin >> a[i];
    int max = 0;
    int res = -1;
    rep(2, i, 1001) {
        int c = 0;
        rep(0, j, n) {
            if(a[j] % i == 0) 
                c++;
        }
        if(max < c) {
            max = c;
            res = i;
        }
    }
    return 0;
}