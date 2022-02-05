#include <stdio.h>
#include<string.h>
//this is modify by me...!!!...coolman
int main()

{
	char operation;
	int FirstNum,SecondNum;

	printf("enter your operation either - or + or * or / :\n");
	scanf("%c", &operation);

	printf("enter your first number :\n");
	scanf("%d", &FirstNum);

	printf("enter your second number number :\n");
	scanf("%d", &SecondNum);

	switch (operation)
	{

	    case '+':
	    printf("%d : is your result!!!", FirstNum+SecondNum);
	    break;

	    case '-':
	    printf("%d : is your result!!!", FirstNum-SecondNum);
	    break;

	    case '*':
	    printf("%d : is your result!!!", FirstNum*SecondNum);
	    break;

	    case '/':
	    printf("%d : is your result.!!!", FirstNum/SecondNum);
	    break;

	}


	return 0;
}
