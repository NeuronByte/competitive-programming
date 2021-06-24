#include <iostream>
using namespace std;

int main() {
	int n;
    double m;
    cin >> n >> m;
    if(n % 5 == 0 && n + 0.50 <= m)
        printf("%.2lf\n", (m - n) - 0.50);
    else
        printf("%.2lf\n", m);
	return 0;
}