// https://toph.co/p/fibonacci-numbers

#include <iostream>
using namespace std;

int main() {
	int n;
	int prev = 1;
	int curr = 1;
	cin >> n;
	
	int i = 2;
	while(i < n) {
		int temp = curr;
		curr += prev;
		prev = temp;
		i++;
	}
	
	cout << curr << endl;
	
	return 0;
}
