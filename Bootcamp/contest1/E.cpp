// https://vjudge.net/contest/623887#problem/E

#include <iostream>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	
	for(int i = 0; i < t; i++) {
		cin >> n;
		int num[n];
		for(int j = 0; j < n; j++) cin >> num[j];
		for(int j = n; j > 0; j--) {
			while(num[j + 1] % num[j] == 0) num[j]++;
		}
		for(int j = 0; j < n; j++) cout << num[j] << " ";
		cout << endl;
	}
	return 0;
}
