#include<iostream>
#include <algorithm>
using namespace std;

int N[1000001] = { 0, };

int dp(int num) {
	//���� ����
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
	//�ڿ��� n �Է� �ް� 
	//-1, /2, /3 ���� ����
	cout << dp(n);
	
	return 0;
}