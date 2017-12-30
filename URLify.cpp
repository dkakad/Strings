#include "URLify.h"

using namespace std;

/**
 * A helper function that replaces all the spaces in the string with
 * '%20'. We first use iterator to traverse the string so that we count
 * the number of spaces and then we use char array to modify the string
 * as it is faster. The shifting is done in-place to ensure O(1) space
 * complexity.
 */

char * Url(char c[]) {
	string s(c);
	string::iterator it;
	int count = 0;
	for (it = --s.end(); *it == ' '; it--) {
		count++;
	}

	for (int i = 0; i < s.size() - count; i++) {
		if (c[i] == ' ') {
			for (int j = s.size() - count - 1; j > i; j--) {
				c[j + 2] = c[j];
			}
			count = count - 2;
			c[i] = '%';
			c[i + 1] = '2';
			c[i + 2] = '0';
		}
	}
	return c;
}