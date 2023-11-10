#include<stdio.h>

main()
{
	printf("\t\t\t*\t   *\n");
	printf("\t\t*\t      *\n");
	printf("\t*\t\t*\n");
	printf("\t\t*\t      *\n");
	printf("\t\t\t*\t   *\n\n\n");
	
	
	printf("\n\n\t\t*\t*\t*\t*\t*\t*\t*\n\n\n");
	printf("\t*\t*\t*\t*\t*\t*\t*\t*\n\n");
	printf("\t*\t\t*\t\t\t\t\t*\n\n");
	printf("\t*\t\t*\t\t*\t*\t*\t*\n\n");
	printf("\t*\t\t*\t\t*\t\t*\t*\n\n");
	printf("\t*\t*\t*\t*\t*\t*\t*\t*\n\n");
	
	int x,y,z;
	
	printf("\n\nEnter first no.=");
	scanf("%d",&x);
	printf("Enter second no.=");
	scanf("%d",&y);
	printf("Before swapping\t"
	"x=%d,y=%d\n",x,y);
	z=x;
	x=y;
	y=z;
	printf("After swapping\t""x=%d,y=%d",x,y);
	
	printf("\n\nEnter first no.=");
	scanf("%d",&x);
	printf("Enter second no.=");
	scanf("%d",&y);
	printf("Before swapping\t""x=%d,y=%d\n",x,y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("After swapping\t""x=%d,y=%d\n",x,y);
	
	float f,c;	
	printf("\n\nEnter Temp. =");
	scanf("%f",&c);
	f=c*9/5+32;
	printf("f = %.2f",f);
	
	
	int s=25000;
	int h=10;
	int d=5;
	int t=8;

	int bs=s+(s*10/100)+(s*5/100)+(s*8/100);
	printf("\n\nGross salary = %d",bs);

}