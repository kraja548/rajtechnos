#include<stdio.h>
main()
{
	int count=0;
	while(getchar()!=EOF)
		++count;
	printf("%d",count);

}
