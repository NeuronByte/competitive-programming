#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int h, w;
    cin >> h >> w;
    vector<int> data(h * w);
    for (int i = 0;i < h * w;i++) {
        cin >> data.at(i);
    }
    sort(data.begin(), data.end());
    int min = data.at(0);
    int count = 0;
    for (int i = 0; i < h * w;i++) {
        count += data.at(i) - min;
    }
    cout << count << endl;
}
