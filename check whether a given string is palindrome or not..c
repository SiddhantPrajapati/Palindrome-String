//wap to find largest array element in c
#include<stdio.h>
int main()
{
    int num[10],i,n,largest,pos;
    printf("enter the number element of array=");
    scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&num[i]);
   }
   largest=num[0];

   for(i=1;i<n;i++)
   {
       if(largest<num[i])
{
largest=num[i];
       pos=i;
}
   }
   printf("the largest number=%d",largest);
   printf("\n the index position of largest number=%d",pos);
   return 0;
}
