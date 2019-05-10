#include<iostream>
#include <algorithm>
using namespace std;

int N[1000001] = { 0, };

int dp(int num) {
	//기저 조건
	if (num == 1) {
		return 0;
	}

	if (N[num] > 0) {
		return N[num];
	}
	
	N[num] = dp(num - 1) + 1;
	if (num % 3 == 0) {
		N[num] = min(dp(num / 3) + 1, N[num]);
	}
	if (num % 2 == 0) {
		N[num] = min(dp(num / 2) + 1, N[num]);
	}
	return N[num];
}

int main() {
	int n;
	cin >> n;
	//자연수 n 입력 받고 
	//-1, /2, /3 연산 시작
	cout << dp(n);
	
	return 0;
}