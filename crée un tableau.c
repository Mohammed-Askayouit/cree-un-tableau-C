#include<stdio.h>
#include<stdlib.h>
int main()
{
   int T[4];
int i ,min ;
 printf("veullez entre les elements de tableau \n ");
  for(i=1;i<5;i++){
   printf("T[%d]=",i);
scanf("%d",&T[i]);
}
min=T[0];
for(i=1;i<5;i++){
   if(min>T[i])
  min=T[i];
}
printf("le monument des element est : %d",min);
    return 0;
}