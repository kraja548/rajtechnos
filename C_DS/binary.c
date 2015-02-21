#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
main()
{
  unsigned int n=100,i,j=0,k=32;
  char *binary=(char*)malloc(k);
  double sum=0,temp;
  int l=0;
  for(i=i<<1;i>0;i/=2)
  {
    if(n&i)
      binary[j++]='1';      
    else    
      binary[j++]='0';
  }
  binary[j++]='\0';
  printf("%s\n",binary);
  for(i=0;i<32 && binary[i]!='\0';i++)
  {
    if(binary[i]=='1')
      binary[i]='0';
    else
      binary[i]='1';      
  }
  printf("%s\n",binary);
  for(i=30;i>0;i--)
  {
    temp=pow(2,l++);
    sum+=temp;
    //printf("%d",binary[i]-48);
    
  }
  //printf("%d",binary[i]-48);
  
}