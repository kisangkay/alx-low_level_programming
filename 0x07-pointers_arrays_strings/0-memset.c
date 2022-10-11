/* start by including the header file that contains the used variables */
include "main.h"

/*declare the local variables*/
char *char_memset (char *s,char b, unsigned int n){
	unsigned int i;

	/*for loop to keep asigning the bytes */
	for (i=0;n>0;i++;n--){
		s[i]=b;
}
return s;
}
