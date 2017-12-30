#include <stdio.h>
#include <string>

using namespace std;

/**
 * Helper Function to check if 2 strings are permutations of each
 * other or not.
 * @param c1 -> The first string
 * @param c2 -> The second string
 * @return true if the strings are permutations of each other, false otherwise
 */
bool isPerm(string c1, string c2) {
	if (c1.length() != c2.length()) {
		return false;
	}
	int count1[26], count2[26];
	string::iterator it1;
	int c;
	for (it1 = c1.begin(); it1 != c1.end(); it1++) {
		c = *it1 - 97;
		count1[c]++;
	}
	for (it1 = c2.begin(); it1 != c2.end(); it1++) {
		c = *it1 - 97;
		count2[c]++;
	}
	for (int i = 0; i < 26; i++) {
		if (count1[i] != count2[i]) {
			return false;
		}
	}
	return true;
}
