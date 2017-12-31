#include "IsUnique.h"
#include "StringPerm.h"
#include "URLify.h"
#include "Palindrome.h"
#include "OneAway.h"
#include "Compress.h"

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
 * the spaces with %20.
 */

void TestURL() {
	char c[] = "Mr John Smith      ";
	printf("%s \n", Url(c));
}

/**
 * Tester function to Check if a string anagram is a palindrome or not.
 */

void TestPalindrome() {
	char s[] = "Malayalam";
	if (isPalindrome(s)) {
		printf("Is a Palindrome \n");
	}
	else {
		printf("Not a Palindrome \n");
	}
}

/**
 * Tester function to check if 2 strings are just one
 * edit away from each other or not
 */
void TestOneAway() {
	char a[] = "pales";
	char b[] = "bakes";
	if (isOneAway(a, b)) {
		printf("Is One Away \n");
	}
	else {
		printf("Not is One Away \n");
	}
}

/**
 * Tester function to check a function that performs
 * basic string compression.
 */
void TestCompressed() {
	char a[] = "aaabbccddddeeeeee";
	string s = Compress(a);
	const char * c = s.c_str();
	printf("%s \n", c);
}
/**
 * Start of main function
 */

int main() {
	//TestUnique();
	//TestPerm();
	//TestURL();
	//TestPalindrome();
	//TestOneAway();
	TestCompressed();
	return 0;
}

/**
 * End of main function
 */