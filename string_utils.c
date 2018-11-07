//Author: SungHa Park
//Date: 11/06/2018
//This program contains all function prototypes with documentation and their definitions.

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

#include"string_utils.h"

int strContains(const char *str, const char *subStr) {
	int i;
	int j;

	for (i = 0; i <= strlen(str)-strlen(subStr); i++) {
		if (strlen(subStr) > strlen(str)) {
			return 0;
		}
		if (str[i] == subStr[0]) {
			for (j = 0; j < strlen(subStr); j++) {
				if (j == strlen(subStr) - 1 && str[i + j] == subStr[j]) {
					return 1;
					
				}
				else if (str[i + j] != subStr[j]) {
					break; 
				}
			}
		}
	}
	return 0;
}

char *concatenate(const char *s, const char *t) {
	char *sum = (char *) malloc(strlen(s) + strlen(t) + 1);
	strcpy(sum, s);
	strcat(sum, t);
	return sum;
}

char *append(const char *s, const char *t) {
	char *app =(char *) malloc(strlen(s) + strlen(t) + 1);
	strcpy(app, s);
	strcat(app, t);
	return app;
}

char *prepend(const char *s, const char *t) {
	char *pre = (char *)malloc(strlen(s) + strlen(t) + 1);
	strcpy(pre, t);
	strcat(pre, s);
	return pre;
}

char *substringToEnd(const char *s, int beginningIndex) {
	int subStrLength = strlen(s) - beginningIndex;
	char *subStr = (char *)malloc(sizeof(char)*(subStrLength)+1);
	int i;
	for (i = beginningIndex; i<strlen(s); i++) {
		subStr[i - beginningIndex] = s[i];
	}
	subStr[subStrLength] = '\0';
	return subStr;
}

char *substringIndex(const char *s, int beginIndex, int endIndex) {
	int subStrLength = endIndex-beginIndex;
	char *subStr = (char *)malloc(sizeof(char)*(subStrLength)+1);
	int i;
	for (i = beginIndex; i < endIndex; i++) {
		subStr[i-beginIndex] = s[i];
	}
	subStr[subStrLength] = '\0';
	return subStr;
}

char *substringSize(const char *s, int beginningIndex, int size) {
	char *subStr = (char *)malloc(sizeof(char)*(size+1));
	int i;
	for (i=0; i < size; i++) {
		subStr[i] = s[beginningIndex + i];
	}
	subStr[size] = '\0';
	return subStr;
}
