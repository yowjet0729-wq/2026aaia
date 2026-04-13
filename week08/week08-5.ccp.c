//week08-5a.ccp SOIT107_Base_009
#include <stdio.h>
int main()
{
	int N;
	scanf("%d", &N);
	if(N>2) printf("%d", N-2);
	else printf("%d", 2-N);
}

//week08-5b.ccp SOIT107_Base_0011
#include <stdio.h>
int main()
{
	int a, b;
	char c;
	scanf("%d %c %d", &a ,&c, &b);
	if(c=='+')printf("%d",a+b);
	if(c=='-')printf("%d",a-b);
	if(c=='*')printf("%d",a*b);
	if(c=='/')printf("%d",a/b);
}

//week08-5c.ccp SOIT107_Base_0013
#include <stdio.h>
int main()
{
	int N;
	scanf("%d", &N);
	printf("%d", (N-1)%7);
	//1:0
	//2:1
	//3:2
	//4:3
	//5:4
	//6:5
	//7:6
}

//week08-5e.ccp SOIT107_Base_0016
#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d", a*a - b*b);
}

//week08-5d.ccp SOIT107_Base_0014
#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	printf("%d",a*50 +b*5+c);
}

//week08-5f.ccp SOIT107_Base_0017
#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	int ans = a-b*6;
	printf("%d %d", ans/6,ans%6);
}
