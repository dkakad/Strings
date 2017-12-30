/**
 * An implementation of a checker function that checks if a string contains an 
 * anagram of a palindrome. This implementation is only dependent on the number of 
 * odd characters that are repeated.
 * @author Deepak Kakad
 */

#pragma once
#include <stdio.h>
#include <string>

/**
 * Define macros for ASCII values
 */

#define ALPHABETS 26
#define UPPER_CASE_Z 90
#define UPPER_CASE_A 65
#define LOWER_CASE_A 97


bool isPalindrome(char c[]);
bool isOdd(int n);
int ascToIndex(char c);