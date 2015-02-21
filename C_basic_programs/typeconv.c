#include<stdio.h>
main()
{
 char c='R';
 char l='n';
 int k=c,m=l;
 if(k>='A' && k<='Z')
	printf("%c\n",c+'a'-'A');
 if(m>='a' && m<='z')
	printf("%c\n",l-('a'-'A'));

}
