#include <iostream>

using namespace std;

int a[20] = { 0,1,1,1 };

int main() {
	int n;
	int sum = 0;
	cin >> n;
	if (n < 4) {
		sum = n;
	} else {
		sum = 3;
		for (size_t i = 4; i <= n; i++) {
			a[i] = a[i - 1] + (a[i - 2] + a[i - 3])*i;
			sum += a[i];
		}
	}
	cout << sum;
	return 0;
}