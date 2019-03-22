#include <iostream>
#include <cstdio>
#include <cctype>
using namespace std;

int main() {
	bool hasLetter = false
		, hasDigit = false;
	char c;
	while (cin >> c) {
		if (isdigit(c)) hasDigit = true;
		else if (isalpha(c))hasLetter = true;
	}
	if (hasDigit && hasLetter) {
		cout << "mixed";
	} else if (hasDigit) {
		cout << "digit";
	} else {
		cout << "letter";
	}
	return 0;
}