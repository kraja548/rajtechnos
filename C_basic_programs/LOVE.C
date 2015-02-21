#include<stdio.h>
#include<string.h>
void main()
{
  char *arr = "i love you baby";
  int i=0;
  clrscr();
  printf("Type something:\n");
  while(i < strlen(arr))
  {
   getch();
   printf("%c", arr[i++]);
  }
   getch();
 }