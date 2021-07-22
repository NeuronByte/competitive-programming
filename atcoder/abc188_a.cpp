#include<iostream>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int x, y;
    cin >> x >> y;
    if((x < y && x + 3 > y) || (x > y && y + 3 > x))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
