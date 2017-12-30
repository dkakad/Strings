/**
 * An implementation of a function that can convert a string into a URL.
 * This simply means that we replace the spaces in a string with '%20'
 * Assumptions: We must provide trailing spaces to the string such that 
 *				extra characters are accomodated.
 * @author Deepak Kakad
 */

#pragma once
#include <stdio.h>
#include <string>

char * Url(char []);