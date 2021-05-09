#include<stdio.h>
#include<stdbool.h>
# define TRUE 1
# define FALSE 0
bool ChkVowel (char ch)
{
if (ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch== 'u' || ch=='U')

{
return TRUE;
}
else
{
return FALSE;
}
}
int main()
{
	char cValue = '\0';
bool bRet = FALSE;
printf("Enter character\n");
scanf("%c",&cValue);
bRet = ChkVowel (cValue );
if (bRet == 1)
{
printf("It is Vowel");
}
else
{
printf("It is not Vowel");
}
return 0;
}