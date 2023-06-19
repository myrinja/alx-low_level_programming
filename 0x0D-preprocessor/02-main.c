#include <stdio.h>
/**
 * Main: prints the name of the compiled file
 * Returns : Always returns (0) on sucess
 */

int main() {
	printf("Compiled from file: %s\n", __FILE__);
	return 0;
}

