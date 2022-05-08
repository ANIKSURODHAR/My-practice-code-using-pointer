#include <stdio.h>
#include <stdlib.h>
void cubereference(int *nptr);
int main()
{
int number;
scanf("%d",&number);
printf("The number is:%d\n",number);
cubereference(&number);
printf("The new number is:%d\n",number);
return 0;
}
void cubereference(int *nptr)
{
*nptr=*nptr * *nptr * *nptr;
}
