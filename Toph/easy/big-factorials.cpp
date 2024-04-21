// https://toph.co/p/big-factorials

#include <iostream>
#include <climits>
using namespace std;

int main() {
	int num = 20;
	int trail = 0;
	unsigned long long int fact = 1;
	
	for(int i = 2; i <= num; i++) {
		fact *= i;
		trail = fact % 10000;
	}
	
	if(fact == 0) cout << "0000" << endl;
	else cout << trail << endl;
	
	return 0;
}
