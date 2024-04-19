// https://toph.co/p/formatted-numbers

#include <iostream>
#define STRLEN 9
#define CONVLEN STRLEN + (STRLEN / 3)
#define GROUPLEN 3
using namespace std;

int main() {
	int num, i;
	char formatted[CONVLEN];
	int groupedNum[GROUPLEN];
	cin >> num;
	
	i = 0;
	while(num != 0) {
		groupedNum[i++] = num % 1000;
		num /= 1000;
		i++;
	}
	
	for(int i = 0, j = GROUPLEN - 1; i < CONVLEN; i++) {
		formatted[i] = groupedNum[j]
	}
}
