// https://atcoder.jp/contests/abc096/tasks/abc096_b

#include <iostream>
using namespace std;

int main() {
	int A, B, C, K, max, sum = 0;
	cin >> A >> B >> C;
	cin >> K;
	
	max = (A > B) ? ((A > C) ? A : C) : ((B > C) ? B : C);
	sum -= max;
	for(int i = 0; i < K; i++) {
		max *= 2;
	}
	
	sum += max + A + B + C;
	cout << sum << endl;
	
	return 0;
}
