/**
 * An implementation of a checker function that checks if a string contains only
 * unique characters or not. This checker uses bit level manipulations to check 
 * if a character is unique or not.
 * @author Deepak Kakad
 */

#include <stdio.h>

/**
 * Helper Function to check uniqueness of a string
 * @param c -> The string to be checked
 * @return true if the string is unique, false otherwise
 */
bool isUnique(char *c) {
	int i = 0;
	unsigned int map = 0;
	while (c[i] != NULL) {
		if (c[i] > 64 && c[i] < 91) {
			c[i] = c[i] + 32;
		}
		unsigned int mask = 1 << (31 + c[i] - 97);
		if (!(map ^ mask) == 1) {
			return false;
		}
		map = 1 << (31 + c[i] - 97);
		i = i++;
	}
	return true;
}

/**
 * Start of main function
 */

int main() {
	char * c = "hello";
	if (isUnique(c)) {
		printf("Unique \n");
	}
	else {
		printf("Not Unique \n");
	}
	return 0;
}
/**
* End of main function
*/