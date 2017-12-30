#include "Palindrome.h"

using namespace std;

/**
 * Helper Function to check if a string is an anagram of a
 * palindrome or not.
 * @param c -> The string to be checked
 * @return true if the string is an anagram of a palindrome, false otherwise
 */
bool isPalindrome(char c[]) {
	string s(c);
	int n = s.size();
	int map[ALPHABETS], numOdd = 0, numEven = 0;
	string::iterator it;
	for (it = s.begin(); it != s.end(); it++) {
		if (*it == ' ') {
			n--;
			continue;
		}
		map[ascToIndex(*it)]++;
	}

	for (int i = 0; i < ALPHABETS; i++) {
		if (isOdd(map[i])) {
			numOdd++;
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
		return !numOdd;
	}
}

/**
 * Helper Function to check if a number is odd or not.
 * @param n -> The number to be checked
 * @return true if the number is odd, false otherwise
 */
bool isOdd(int n) {
	return n % 2;
}

/**
 * Helper Function to convert a character into its corresponding
 * index in the map.
 * @param c -> The character to be mapped
 * @return index that is mapped
 */
int ascToIndex(char c) {
	if (c >= UPPER_CASE_A && c <= UPPER_CASE_Z) {
		c = c + LOWER_CASE_A - UPPER_CASE_A;
	}
	int val = c - LOWER_CASE_A;
	return val;
}