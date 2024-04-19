// https://toph.co/p/icpc-is-coming-in-hot

#include <iostream>
#define MAXINP 6
#define BASE 10
using namespace std;

int countMaxOccurance(char num[]) {
	int maxNum;
	int maxOccurance = 0;
	int occurance[BASE];
	
	// Initializing all indexes representing occurance
	for(int i = 0; i < BASE; i++) occurance[i] = 0;
	
	// Counting occurances
	int i = 0;
	while(num[i] != '\0') {
		int idx = num[i++] - '0';
		occurance[idx]++;
		if(maxOccurance < occurance[idx]) {
			maxOccurance = occurance[idx]; 
			maxNum = idx;
		}
	}
	
	return maxNum;
}

int main() {
	char num[MAXINP];
	cin >> num;
	
	int maxNum = countMaxOccurance(num);
	cout << maxNum << endl;
	
	return 0;
}
