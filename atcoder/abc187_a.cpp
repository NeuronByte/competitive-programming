#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
	  cin.tie(0);
	  cout.tie(0);
    int a, b, sa = 0, sb = 0;
    cin >> a >> b;
    for(int i = 0; a > 0 && b > 0; i++) {
        sa += a % 10;
        a /= 10;
        sb += b % 10;
        b /= 10;
    }
    cout << max(sa, sb) << endl;
}
