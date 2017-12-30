#include "Palindrome.h"

using namespace std;

bool isPalindrome(char c[]) {
	string s(c);
	int n = s.size();
	int map[26], numOdd = 0, numEven = 0;
	string::iterator it;
	for (it = s.begin(); it != s.end(); it++) {
		if (*it == ' ') {
			n--;
			continue;
		}
		map[ascToIndex(*it)]++;
	}

	for (int i = 0; i < 26; i++) {
		if (isOdd(map[i])) {
			numOdd++;
		}
		else {
			numEven++;
		}
	}

	if (isOdd(n)) {
		if (numOdd == 1) {
			return true;
		}
		else {
			return false;
		}
	}
	else {
		if (numOdd == 0) {
			return true;
		}
		else {
			return false;
		}
	}
}

bool isOdd(int n) {
	return n % 2;
}

int ascToIndex(char c) {
	if (c >= 65 && c <= 90) {
		c = c + 32;
	}
	int val = c - 97;
	return val;
}