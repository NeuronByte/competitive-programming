#include <bits/stdc++.h> 
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);    
    int n, k, t;
    cin >> n >> k;
    int c = 0;
    while(n--) {
        cin >> t;
        if(t % k == 0)
            c++;
    }
    cout << c << "\n";
    return 0;
}
