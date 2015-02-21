/*
Write a program to copy its input to its output, replacing each tab by \t , each backspace by \b , and each backslash by \\ . This makes tabs and backspaces visible in an unambiguous way.
*/
#include<stdio.h>
main()
{
	int c;
	while((c=getchar())!=EOF)
	{
		if(c==' ')
			printf("\\b");
		else if(c=='\t')
			printf("\\t");
		else 
			putchar(c);
	}	
}
