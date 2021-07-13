#include<iostream>
using namespace std;
 
int main() {
  	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
  	int n, x;
    string s;
    cin >> n >> x >> s;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == 'o')
            x++;
        else if(s[i] == 'x' & x != 0) {
            x--;
        }
    }
    cout << x << endl;
    return 0;
}
