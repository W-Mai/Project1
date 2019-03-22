#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;

bool isPrime(int n) {
	if (n == 1) return 0;
	if (n == 2) return 1;
	if (!(n % 2)) return 0;
	int m = int(sqrt(n)) + 1;
	for (int i = 3; i < m; i += 2)
		if (!(n%i)) return 0; 
	return 1;
}
bool isRevered(int n) {
	char str[15];
	int len;
	sprintf(str, "%d", n);
	len = strlen(str);
	for (int i = 0; i < (len + 1) / 2; i++) {
		if (str[i] != str[len - i -1])return 0;
	}
	return 1;
}

int main() {
	int n;
	cin >> n;
	cout << (isPrime(n) && isRevered(n) ? "Yes" : "No");
	return 0;
}