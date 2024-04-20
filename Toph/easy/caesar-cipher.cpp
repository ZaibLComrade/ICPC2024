// https://toph.co/p/caesar-cipher

#include <iostream>
#define MAXLEN 128
#define ALPHALIMIT 26
using namespace std;

int main() {
	char plainText[MAXLEN];
	char cipherText[MAXLEN];
	int shift = 3;
	cin >> plainText;
	
	for(int i = 0; plainText[i] != '\0'; i++) {
		char shiftedChar = plainText[i] + shift;
		/* cout << shiftedChar << endl; */
		shiftedChar %= ALPHALIMIT;
		cout << shiftedChar << endl;
		cipherText[i] = shiftedChar;
	}
	
	for(int i = 0; cipherText[i] != '\0'; i++) {
		cout << cipherText;
	}
	
	return 0;
}
