#include<stdio.h>
main()
{
	int num;
	printf("Please Enter a Number between 1 & 5: ");
	scanf("%d",&num);
	
	switch(num)
	{
		case 1:printf("Food Item= Eggs Price=20");
		break;
		case 2:printf("Food Item= Pizza Price=220");
		break;
		case 3:printf("Food Item=Dosa and Price=80");
		break;
		case 4:printf("Food Item= Pancakes Price=180");
		break;
		case 5:printf("Food Item= Cake Price=480");
		break;
		default:printf("Enter a valid choice");
	}
}
