#include <stdio.h>
main()
{
	int b=0,c=0;
	char cha;
	while(cha!='!')
	{
		scanf("%c",&cha);
		if(cha!=) 
		{
			switch(cha)
		{
				case'a':
				b++ ;
				break;
				case'o':
				b++;
				break;
				case'e': 
				b++;
				break;
				case'u':
				b++;
				break;
				case'i':
				b++;
				break;
				default:
				c++;
				break;
			}
		}
	}
	if(c>b)
		printf("Non-Vowel: %d > Vowel: %d",c,b);
	else if(b>c)
		printf("Vowel: %d > Non-Vowel: %d",b,c);
	else if(b==c)
		printf("Vowel: %d == Non-Vowel",b,c);
}
