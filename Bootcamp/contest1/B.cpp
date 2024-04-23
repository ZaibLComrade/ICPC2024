// https://vjudge.net/contest/623887#problem/B

#include <iostream>
#define MAX_CASE 32
#define BUFFER 5
using namespace std;

int main() {
	int testCase;
	char str[BUFFER];
	cin >> testCase;
	
	for(int i = 0; i < testCase; i++) {
		cin >> str;
		int aCount = 0, bCount = 0;
		for(int j = 0; str[j] != '\0'; j++) {
			if(str[j] == 'A') aCount++;
			else if(str[j] == 'B') bCount++;
		}
		if(aCount > bCount) cout << 'A' << endl;
		else cout << 'B' << endl;
	}
	return 0;
}
