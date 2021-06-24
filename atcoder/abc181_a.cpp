#include<iostream>
using namespace std;
 
int main() {
	int n;
  	cin >> n;
  	string color = (n%2) == 0 ? "White" : "Black";
  	cout << color;
  	return 0;
}