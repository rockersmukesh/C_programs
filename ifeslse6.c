//check whether the character is vowel or consonant 
#include<stdio.h>
int main()
{
	char alp;
	printf("Enter a character:");
	scanf("%d",&alp);
	if(alp=='a' || alp=='e' || alp=='i' || alp=='o' || alp=='u' || alp=='A' || alp=='E' || alp=='I' || alp=='O' || alp=='U')
	{
		printf("It is vowel");
	}
	else
	{
		printf("It is consonant");
	}
}
