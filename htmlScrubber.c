//Author: SungHa Park
//Date: 11/07/2018
//This program opens html file.

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(int argc, char **argv) {

	char *inputPath = argv[1];
	char *outputPath = argv[2];
	
	FILE *input = fopen(argv[1], "r");
	FILE *output = fopen(argv[2], "w");
		
	char c = fgets(c);
	while (c != EOF) {
		if (c == '&') {
			fprintf(outputPath, "&amp;");
		}
		if (c == '<' ) {
			fprintf(outputPath, "&lt;");
		}
		if (c == '>' ) {
			fprintf(outputPath, "gt;");
		}
		if (c == '"') {
			fprintf(outputPath, "&quot;");
		}
		else {
			fprintf(outputPath, &c);
		}
	}  return 0;
} 
	
	


