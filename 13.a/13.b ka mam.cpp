#include<stdio.h>
#include<conio.h>
struct student
{
	int p,c,m,tot;
};
int main()
{
	struct student a,b;
	printf("enter marks of ist student");
	scanf("%d%d%d",&a.p,&a.c,&a.m);
	printf("enter marks of 2nd student");
	scanf("%d%d%d",&b.p,&b.c,&b.m);
	a.tot=a.p+a.c+a.m;
	b.tot=b.p+b.c+b.m;
	printf("%d\t%d",a.tot,b.tot);
return 0;	
}
