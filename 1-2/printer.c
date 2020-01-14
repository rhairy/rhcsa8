#include <stdio.h>

int main() {
	char str[60];	

	if ( fgets(str, 60, stdin) != NULL ) {
		fprintf(stdout, "STDOUT: %s", str);
		fprintf(stdin, "STDERR: %s", str);
	}
	return 0;
}
