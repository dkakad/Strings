#include "OneAway.h"
#include "Palindrome.h"

using namespace std;

/**
* Helper Function to check if 2 strings are just one edit away from each other
* or not.
* @param a -> The first string
* @param b -> The second string
* @return true if the strings are one edit away, false otherwise
*/
bool isOneAway(char a[], char b[]) {
	int map1[ALPHABETS] = { 0 }, map2[ALPHABETS] = { 0 };
	string s1(a), s2(b);
	int n1 = s1.size();
	int n2 = s2.size();
	int diff = n1 - n2;
	if (diff > 1 || diff < -1) {
		return false;
	}
	bool flag = (n1 != n2);
	int n = (n1 < n2) ? n1 : n2;
	int idx;
	for (int i = 0; i < n; i++) {
		idx = ascToIndex(a[i]);
		map1[idx]++;
		idx = ascToIndex(b[i]);
		map2[idx]++;
	}
	if (flag) {
		if (n == n1) {
			idx = ascToIndex(b[n2 - 1]);
			map2[idx]++;
		}
		else {
			idx = ascToIndex(a[n1 - 1]);
			map1[idx]++;
		}
	}
	int count = 0;
	
	for (int i = 0; i < ALPHABETS; i++) {
		if (map1[i] != map2[i]) {
			count++;
		}
	}
	if (flag) {
		if (count > 1) {
			return false;
		}
	}
	else {
		if (count > 2) {
			return false;
		}
	}
	return true;
}
