#include<stdio.h>
main()
{
	printf("--------.Pick your food items from our menu.--------");
	printf("\n1. Pizza - Rs.239 \n2. Burger - Rs.129 \n3. Pasta - Rs.179 \n4. French Fries - Rs.99 \n5. Sandwich - Rs.149 \n");
	int choice=0; 
	printf("Please enter your choice = ");
	scanf("%d",&choice);
	printf("\n");
	switch(choice)
	{
		case 1:
			printf("Your order ......\n");
			printf("Food item - Pizza \nPrice - Rs.239");
			break;
		case 2:
			printf("Your order ......\n");
			printf("Food item - Burger \nPrice - Rs.129");
			break;
		case 3:
			printf("Your order ......\n");
			printf("Food item - Pasta \nPrice - Rs.179");
			break;
		case 4:
			printf("Your order ......\n");
			printf("Food item - French Fries \nPrice - Rs.99");
			break;
		case 5:
			printf("Your order ......\n");
			printf("Food item - Sandwich \nPrice - Rs.149");
			break;
		default : printf("Invalid choice !!!");
	}
}
