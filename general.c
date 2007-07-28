#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "general.h"

/*
 * Liest (maximal 31) Zeichen ein, bis Enter gedr�ckt wird. Der zur�ckgegebene 
 * char-pointer muss anschlie�end ge-free()d werden!
 *
 */
char *get_input() {
	uc i = 0;
	char *output = malloc(32 * sizeof(char));
	uc c;
	if (output == NULL) {
		perror("malloc()");
		exit(1);
	}
	memset(output, '\0', 32);
	while (1) {
		if (i == 31)
			break;
		c = getchar();
		if (c == 13)
			break;
		else output[i++] = c;
	}
	return output;
}
