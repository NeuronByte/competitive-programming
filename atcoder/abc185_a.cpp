#include<iostream>
#include<algorithm>
using namespace std;
 
int main() {
  	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
  	int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << min({a, b, c, d}) << endl;
    return 0;
}
