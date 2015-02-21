#include<stdio.h>
#include<stdlib.h>
void invertNum(int,int **);
int main(){
int i,*p,j;
printf("Nter the number :");
scanf("%d",&i);
p=(int *)malloc(sizeof(int)*i);
for(j=0;j<i;j++){
*(p+j)=j+1;
printf("%d ",*(p+j));
}
printf("\n");
invertNum(i,&p);
for(j=0;j<i;j++){
printf("%d ",*(p+j));
}
printf("\n");
return 0;
}
void invertNum(int n,int **p){
int i,j;
for(i=2;i<=n/2;i++){
for(j=1;j*i<=n;j++){
printf("%d ", j*i);
*(p+(i*j))=0;
}printf("\n");
}printf("\n");
}

