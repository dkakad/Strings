#include "IsUnique.h"

/**
 * Helper Function to check uniqueness of a string
 * @param c -> The string to be checked
 * @return true if the string is unique, false otherwise
 */
bool isUnique(char *c) {
	int i = 0;
	unsigned int map = 0;
	while (c[i] != NULL) {
		if (c[i] >= UPPER_CASE_A && c[i] <= UPPER_CASE_Z) {
			c[i] = c[i] + LOWER_CASE_A - UPPER_CASE_A;
		}
		unsigned int mask = 1 << (MAX_LEFT_SHIFT + c[i] - LOWER_CASE_A);
		if (!(map ^ mask) == 1) {
			return false;
		}
		map = 1 << (MAX_LEFT_SHIFT + c[i] - LOWER_CASE_A);
		i = i++;
	}
	return true;
}
