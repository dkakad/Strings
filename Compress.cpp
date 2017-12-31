#include "Compress.h"

/**
* Helper Function to compress a string by replacing the characters 
* occuring in the original string with the character and it's frequency.
* @param a -> The string to be compressed
* @return compressed string if the compressed string is smaller than the 
* original string, if not , return the original string
*/
string Compress(char c[]) {
	if (c == nullptr) {
		return nullptr;
	}
	string s(c);
	string compressed;
	char prev = *c;
	int count = 1;
	for (int i = 1; i < s.size(); i++) {
		if (c[i] == prev) {
			count++;
		}
		else {
			char buf[100];
			int n = sprintf(buf, "%c%d", prev, count);
			compressed.append(buf);
			count = 1;
		}
		prev = c[i];
	}
	char buf[100];
	int n = sprintf(buf, "%c%d", prev, count);
	compressed.append(buf);

	if (s.size() <= compressed.size()) {
		return s;
	}
	return compressed;
}