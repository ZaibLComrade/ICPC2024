// https://atcoder.jp/contests/abc076/tasks/abc076_b

#include <iostream>
using namespace std;

int main() {
	int N, K, cost = 1;
	cin >> N;
	cin >> K;
	
	for(int i = 0; i < N; i++) {
		if(cost < K) cost *= 2;
		else cost += K;
	}
	
	cout << cost;
	return 0;
}
