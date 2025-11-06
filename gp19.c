#include<stdio.h>
int main()
{
int i,j,k;
for(i=1;i<=5;i++) 	//ROW//
{
for(k=1;k<=(4-i+1);k++)          // SPACE//
{
printf(" ");	
}
for(j=1;j<=i;j++)                // COLUMN//
{
printf("*");	
}
printf("\n");	
}
return 0;	
}
