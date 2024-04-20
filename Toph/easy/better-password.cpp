// https://toph.co/p/better-passwords

#include <iostream>
#define MAXLEN 16
#define MINLEN 1
#define MAXBUFFER 32
using namespace std;

int main() {
	char password[MAXLEN];
	char strongPassword[MAXBUFFER];
	
	cin.getline(password, MAXLEN);
	
	for(int i = 0, j = 0; password[i] != '\0'; i++) {
		char c = password[i];
		switch(c) {
			case 's': 
				strongPassword[j] = '$';
				break;
			case 'i':
				strongPassword[j] = '!';
				break;
			case 'o':
				strongPassword[j++] = '(';
				strongPassword[j] = ')';
				break;
			default:
				strongPassword[j] = c;
				break;
		}
		j++;
		if(password[0] < 'A' || password[0] > 'Z') 
			strongPassword[0] = password[0] - 'a' + 'A';
		if(password[i + 1] == '\0') {
			strongPassword[j++] = '.';
			strongPassword[j++] = '\0';
		}
	}
	cout << strongPassword << endl;
	return 0;
}
