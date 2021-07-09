#include <bits/stdc++.h>
using namespace std;
 
int main() {
  double sx, sy, gx, gy;
  cin >> sx >> sy >> gx >> gy;
  double ans = (gx - sx)*(sy/(sy + gy));
  cout << setprecision(8) << ans + sx;
}
