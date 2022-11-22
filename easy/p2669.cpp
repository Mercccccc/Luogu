#include<cstdio>
int a,b=0,c=1;
int main()
{
	scanf("%d",&a);
	for(int i=1;i<=a;i++)
		{
			a-=i;
			b+=c*c;
			c++;
		}
	printf("%d",b+a*c);
	return 0;
}
