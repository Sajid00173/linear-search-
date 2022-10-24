#include<stdio.h>
main()
{
 int num[]= {10,2,34,45,5};
 int value,pos = -1,i;

   printf("Enter the value you want to search: ");
   scanf("%d",&value);

 for(i=0;i<6;i++)
 {
     if(value == num[i])
     {
         pos = i+1;
         break;
     }
 }
    if(pos==-1)
     printf("/nNot found/n");
    else
     printf("\nThe position of %d is %d\n", value,pos);

}
