#include <stdio.h>

int main()
{
#ifdef TEST
	printf("%d\n", TEST);
#else
	printf("Not defined\n");
#endif
	return 0;
}
