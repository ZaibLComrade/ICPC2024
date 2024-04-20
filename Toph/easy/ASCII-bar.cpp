// https://toph.co/p/ascii-progress-bar

#include <iostream>
#define BARLEN 10
using namespace std;

int main() {
	float progress;
	int flooredProgress;
	int count = 0;
	cin >> progress;
	
	flooredProgress = static_cast<int>(progress);
	count = flooredProgress;
	if(count % 10 != 0) count -= count % 10;
	count /= 10;
	
	cout << '['; 
	for(int i = 1; i < BARLEN + 1; i++) {
		if(i <= count) cout << '+';
		else cout << '.';
	}
	cout << ']';
	cout << ' ' << flooredProgress << '%' << endl;

	return 0;
}
