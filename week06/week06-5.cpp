//week06-5a.cpp SOIT107_BASE_020
#include <stdio.h>
int main()
{
	int N;
	for(int i=0; i<6; i++) {
		scanf("%d", &N);
		printf("%d\n",N*N*N);
	}
}

//week06-5b.cpp SOIT107_BASE_008
#include <stdio.h>
int main()
{
	printf("Enter the number of values to be processed: ");
	int N;
	scanf("%d", &N);
	int ans=1, now;
	for(int i=0; i<N; i++) {
		printf("Enter a value: ");
		scanf("%d", &now);
		ans =ans * now;
	}
	printf("Product of the %d values is %d",N, ans);
	//printf("%d",ans);
}
