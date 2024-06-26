// https://toph.co/p/caesar-cipher

#include <iostream>
#define MAXBUFFER 128
#define MAXLEN MAXBUFFER
#define ALPHALIMIT 26
using namespace std;
enum Alpha {
	Capital,
	Small,
	NonAlpha
};

Alpha getAlphaType(char c) {
	if(c >= 'A' && c <= 'Z') return Capital;
	else if(c >= 'a' && c <= 'z') return Small;
	return NonAlpha;
}

int main() {
	char plainText[MAXBUFFER];
	char cipherText[MAXLEN];
	int shift = 0;
	
	cin >> shift;
	cin.ignore();
	cin.getline(plainText, MAXBUFFER);
	
	for(int i = 0, j = 0; plainText[i] != '\0'; i++) {
		char c = plainText[i];
		Alpha charType = getAlphaType(c);
		int shiftedChar = c;
		if(charType != NonAlpha) {
			if(charType == Capital) shiftedChar = ((c - 'A' + shift) % ALPHALIMIT) + 'A';
			else shiftedChar = ((c - 'a' + shift) % ALPHALIMIT) + 'a';
			cipherText[j] = static_cast<char>(shiftedChar);
		} else {
			cipherText[j] = c;
		}
		++j;
		cipherText[j] = '\0';
	}
	
	cout << cipherText << endl;
	
	return 0;
}
