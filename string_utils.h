//Author: SungHa Park
//Date: 11/05/2018
//This program is headerfile containing all function prototypes

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

//determines if a given string str contains a substring subStr 
int strContains(const char *str, const char *subStr);

//This function takes two strings and concatenates them together into a new string.
char *concatenate(const char *s, const char *t);

//This function takes two strings, s and t and appends t to s returning the result as a new string.
char *append(const char *s, const char *t);

//This function takes two strings, s and t and prepends t to s returning the result as a new string.
char *prepend(const char *s, const char *t);

//This function takes a string and returns a new copy of a substring of it starting from a specified index to the end of the string.
char *substringToEnd(const char *s, int beginningIndex);

//This function takes a string and returns a new copy of a substring of it
//starting from a specified index (inclusive) and going a specified ending index (exclusive). 
char *substringIndex(const char *s, int beginIndex, int endIndex);

//This function takes a string and returns a new copy of a substring
//of it starting from a specified index of a particular size
char *substringSize(const char *s, int beginningIndex, int size);
