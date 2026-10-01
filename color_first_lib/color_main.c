#include <stdio.h>

//color codes library
#include "color.h"


int main(void)
{
	char err[] = "Connection lost";
	char warn[] = "Low space detected";
	char succ[] = "User data backed up";

	printf("\n----Testing of Color Code - 1st C Library----\n\n");
	printf("%s ERROR:%s %s\n", RED, RESET, err);
	printf("%s WARNING:%s %s\n", YELLOW, RESET, warn);
	printf("%s SUCCESS:%s %s\n", GREEN, RESET, succ);

	return 0;
}
