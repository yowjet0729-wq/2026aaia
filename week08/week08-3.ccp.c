//week08-3a.ccp SOIT107_Base_007
#include <stdio.h>
int main()
{
	char a,b,c,d,e;
	scanf("%c%c%c%c%c",&a, &b, &c, &d, &e);
	printf("%c   %c   %c   %c   %c", a, b, c, d, e);
}


//week08-3b.ccp SOIT107_Base_012
#include <stdio.h>
int main()
{
	char c;
	scanf("%c", &c);
	if (c>='A' && c<='Z') printf("U");
	else if(c>='a' && c<='z')printf("L");
	else if(c>='0' && c<='9')printf("D");
	else printf("O");
}



//week08-3c.ccp SOIT107_Base_015
#include <stdio.h>
int main()
{
	char c;
	scanf("%c", &c);
	printf("%c",c);
}
