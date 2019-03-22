#include <iostream>

using namespace std;

int main() {
	int T;
	int n, k;
	cin >> T;
	while (T-->0) {
		cin >> n >> k;
		int sum = k;
		for (int i = 2; i <= n; i++) {
			sum += (i - 1)*i / 2;
		}
		cout << sum << endl;
	}
	return 0;
}
//#include<stdio.h>
//int main() {
//	int t;
//	scanf("%d", &t);
//	int f[1000];
//	while (t--) {
//		int n, k;
//		scanf("%d%d", &n, &k);
//		f[1] = k;
//		int s = 1;
//		for (int i = 2; i <= n; i++) {
//			f[i] = f[i - 1] + s;
//			s += i;
//		}
//		printf("%d\n", f[n]);
//	}
//}
