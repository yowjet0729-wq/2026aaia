//week06-4a.cpp SOIT106_BASE_001
#include <stdio.h>
int main()
{
	int N;
	scanf("%d",&N);
	printf("%d %d\n", N/7,N%7);
}

//week06-4b.cpp SOIT106_BASE_007
#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d%d", &a,&b );
	printf("%d\n", a/b);
}

//week06-4c.cpp SOIT107_BASE_003
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d", &a, &b);
	printf("%d",a%b);
}

//week06-4d.cpp SOIT107_BASE_005
#include <stdio.h>
int main()
{
	printf("Enter two numbers:");
	int a,b;
	scanf("%d%d", &a, &b);
	printf(" The remainder is %d\n",a%b);
}
