//week08-4a.ccp SOIT106_Base_009
#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	int MM = a, mm = a;
	if(b>MM) MM = b;
	if(c>MM) MM = c;
	if(b<mm) mm = b;
	if(c<mm) mm = c;
	printf("%d\n", MM - mm);
}

//week08-4b.ccp SOIT107_Base_006
#include <stdio.h>
int main()
{
	printf("Enter two numbers:  ");
	int a, b;
	scanf("%d%d", &a, &b);
	if (a==b) printf("It is a square ");
	else printf ("It is not a square ");
}

//week08-4c.ccp SOIT107_Base_019
#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	int mm = a;
	if (b<mm) mm = b;
	if (c<mm) mm =c ;
	printf("%d\n", mm);

}

//week08-4d.ccp SOIT107_Base_010
#include <stdio.h>
int main()
{
	int N;
	scanf("%d", &N);
	if (N==4 || N==6 || N==9 || N==11 ) printf("30");
	else if (N==2) printf("28");
	else printf("31");
}
