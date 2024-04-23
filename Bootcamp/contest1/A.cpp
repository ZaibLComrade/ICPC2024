// https://vjudge.net/contest/623887#problem/A

#include <iostream>
#define MAX_BUFFER 100
using namespace std;

int main() {
	char string[MAX_BUFFER];
	cin >> string;
	
	for(int i = 0; string[i] != '\0'; i++) {
		char c = string[i];
		string[i] = c + 'A' - 'a';
	}
	
	cout << string;
	return 0;
}
