// https://toph.co/p/formatted-numbers

#include <iostream>
#include <climits>
#define MAXBUFFER 16
using namespace std;

int main() {
	long int num;
	int strlen = 0;
	char str[MAXBUFFER];
	
	cin >> num;
	
	int i = 0;
	while(num != 0) {
		if((i + 1) % 4 == 0) {
			str[i++] = ',';
			strlen++;
		}
		str[i++] = num % 10 + '0';
		num /= 10;
		strlen++;
	}
	str[i] = '\0';
	
	for(int i = 0, j = strlen - 1; i < (strlen / 2); i++, j--) {
		char temp;
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
	
	cout << str << endl;
	
	return 0;
}
