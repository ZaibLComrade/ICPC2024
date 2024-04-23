// https://vjudge.net/contest/623887#problem/C

#include <iostream>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	
	for(int i = 0; i < t; i++) {
		cin >> n;
		int quantity[n];
		int lowest, total = 0;
		for(int j = 0; j < n; j++) {
			cin >> quantity[j];
			if(j == 0) lowest = quantity[j];
			if(quantity[j] < lowest) lowest = quantity[j];
			total += quantity[j];
		}
		int eaten = total - (lowest * n);
		cout << eaten << endl;
	}
	return 0;
}
