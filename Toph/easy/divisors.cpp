// https://toph.co/p/divisors

#include <iostream>
#define MAXLEN 27
using namespace std;

int main() {
	int num;
	int divisors[MAXLEN], k = 0;
	cin >> num;
	
	while(divisors[k] != 0) divisors[k++] = 0;
	k = 0;
	
	for(int i = 0; i <= num; i++) {
		for(int j = 0; j <= num; j++) {
			if(i * j == num) {
				divisors[k] = j;
				divisors[k++] = i;
			};
		}
	}
	
	int temp = 0;
	while(divisors[temp] != num) {
		cout << divisors[temp++] << endl;
	} 
	cout << divisors[temp] << endl;
	
	return 0;
}
