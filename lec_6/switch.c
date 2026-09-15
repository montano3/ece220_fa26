#include <stdio.h>
#define B 5
int main(){

   int x;
   int j = 6;

   printf("Enter an integer: ");
   scanf("%d", &x);

   switch(x)
   {
      case 0:
             printf("number entered is 0\n");
	     break;
      case 1:
             printf("number entered is 1\n");
             break;
      case j:
             printf("number entered is 5\n");
             break;

      default:
	     printf("number entered is neither 0 nor 1\n");
             break;

   }

   return 0;
}

//What happens when you omit the break statement in case 0?
//What happens when you omit both the printf and break statement in case 0?
