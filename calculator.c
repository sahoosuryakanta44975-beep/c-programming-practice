#include<stdio.h>

  int main()
    {
        int num1, num2, choise;
        
        printf("Enter first number: ");
        scanf("%d", &num1);

        printf("Enter second number: ");
        scanf("%d", &num2);
        
        printf("\n1. Addition");
        printf("\n2. Subtraction");
        printf("\n3. Multiplication");  
        printf("\n4. Division");

        printf("\n\nEnter your choise: ");
        scanf("%d", &choise);

        switch(choise)
        {
            case 1:
                printf("\nResult: %d", num1 + num2);
                break;
            case 2:
                printf("\nResult: %d", num1 - num2);
                break;
            case 3:
                printf("\nResult: %d", num1 * num2);
                break;
            case 4:
                printf("result: %d", num1 / num2);
                break;

            default:
                printf("\nInvalid choise.");
        }
        return 0;
    }
