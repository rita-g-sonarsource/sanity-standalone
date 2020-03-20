#include <stdio.h>

void main() {
	printf("%d", 1.2); // 2275 Noncompliant, an "int" is expected rather than a "double"
	printf("%d %d", 1); // Noncompliant, the second argument is missing
	printf("%0$d ", 1); // Noncompliant, arguments are numbered starting from 1
	printf("%1$d %d", 1, 2); // Noncompliant, positional and non-positional arguments can not be mixed
	printf("%*d", 1.1, 2); // Noncompliant, field width should be an integer
	printf("ab\0cd"); // Noncompliant, format string contains null char
}

