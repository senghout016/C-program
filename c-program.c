#include<stdio.h>
main()
{
	char ch;
	int c=0,b=0; //declare variable
	printf("Enter your chioce:");

	
	while(ch!='!')
	{
		scanf("%c", &ch);
		if(ch=='a'||ch=='o'||ch=='e'||ch=='i'||ch=='u')
		b++;
		else
		{
		c++;
		}
	}
	printf("The total of vowel are:  %d\n",b);
	printf("The total of character are: %d\n",c);
}
