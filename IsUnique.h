/**
 * An implementation of a checker function that checks if a string contains only
 * unique characters or not. This checker uses bit level manipulations to check
 * if a character is unique or not.
 * @author Deepak Kakad
 */

#pragma once
#include <stdio.h>

/** 
 * Define macros for ASCII and constant values
 */

#define UPPER_CASE_Z 90
#define UPPER_CASE_A 65
#define LOWER_CASE_A 97
#define MAX_LEFT_SHIFT 31

bool isUnique(char *c);