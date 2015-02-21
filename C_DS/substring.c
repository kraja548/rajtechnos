#include<stdio.h>
#include<string.h>
char* alfabetOrder(char *input)
{
   char ch,res[strlen(input)];
   char *output=(char*)malloc(strlen(input));
   int no[26] = {0}, n, c, t, x;
   n = strlen(input);
   for (c = 0; c < n; c++)
   {
      ch = input[c] - 'a';
      no[ch]++;
   }
   t = 0;
   for (ch = 'a'; ch <= 'z'; ch++)
   {
      x = ch - 'a';
 
      for (c = 0; c < no[x]; c++)
      {
         output[t++] = ch;
         
      }
   }
   output[t++] = '\0';
   //printf("%s\n",output);
   return  (char*)output;
}
int isMatched(char *str1,char *str2)
{
    if(strcmp(alfabetOrder(str1),alfabetOrder(str2))==0)
      return 1;
    else
      return 0;
}
char* subString(char *st,int pos,int len)
{
  char *stout=(char*)malloc(len);
  int i;
  for(i=0;i<len;i++)
  {
    
  }
}
main()
{
   char *longtxt="raja",*subtxt="king"; 
   int M=strlen(longtxt),N=strlen(subtxt);
   int i,j;   
   printf("%d",isMatched(str1,str2));
   
}
