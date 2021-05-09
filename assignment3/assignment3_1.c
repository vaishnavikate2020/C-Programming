#include<stdio.h>
void PrintEven(int iNo)
{
if(iNo <= 0)
{
printf("Please enter number greater than 0");
}
else
{
	int i=0;
	for(i=2 ; i<=2*iNo ;i++)
	{
		if(i%2 == 0)
		printf ("%d\t",i);
	}
}
}
int main()
{
int iValue = 0;
printf("Enter number\n");
scanf("%d",&iValue);
PrintEven(iValue);
return 0;
}