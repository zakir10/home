/* Hello World program */

#include<stdio.h>

int main()
{
	printf("Add 5+5= %i\n", 5+5);
	printf("Substract 7-2= %i\n", 7-2);
	printf("Multiply 5+5= %i\n", 5*5);
	printf("Divide 15/3= %i\n", 15/3);
	
	
	int a, b, c;
 
   printf("Enter two numbers to add\n");
   scanf("%d%d",&a,&b);
   
   c = a + b;

   printf("%d\n",c);

}