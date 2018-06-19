#include <stdio.h>
#include <conio.h>
main(int argc, char const *argv[])
{
	int n,third,first = 0 , second = 1;
	printf("Enter Number upto which fibbonacci numbers are to be printed\n");
	scanf("%d" , &n);
	if (n == 1)
		printf("0\n");
	else if(n == 2)
		printf("0  1\n");
	else{
			printf("0  1  ");
		for (int i = 3; i <= n; ++i){
			third = first + second;
			printf("%d  ", third );
			first = second;
			second = third;	
		}
	}
	printf("\n\n%dth term Fibbonacci Number is %d\n",n , third);
	getch();
}