#include "IsUnique.h"
#include "StringPerm.h"
#include "URLify.h"

/**
 * Tester function to check if a string has unique characters
 * or not.
 */

void TestUnique() {
	char * c = "hello";
	if (isUnique(c)) {
		printf("Unique \n");
	}
	else {
		printf("Not Unique \n");
	}
}

/**
 * Tester function to check if 2 strings are permutations of each
 * other or not.
 */

void TestPerm() {
	string test1("mart");
	string test2("tram");

	if (isPerm(test1, test2)) {
		printf("Valid permutation \n");
	}
	else {
		printf("Not a permutation \n");
	}
}

/**
 * Tester function to URLify a string i.e fill up
 * the spaces with %20
 */

void TestURL() {
	char c[] = "Mr John Smith      ";
	printf("%s \n", Url(c));
}

/**
 * Start of main function
 */

int main() {
	//TestUnique();
	//TestPerm();
	TestURL();
	return 0;
}

/**
 * End of main function
 */