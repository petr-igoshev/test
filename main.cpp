#include<stdio.h>

int main () {
	for (unsigned u = 0; u < 10; u++)
		printf("# %u  %u\n", u, u*u);
	return 0;
}
