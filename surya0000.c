#include<stdio.h>
  
    int main()
  {
        int marks;

        printf("enter marks:");
        scanf("%d",&marks);

        if(marks>=90)
        { 
            printf("grade A");
        }
        else if(marks>=70)
        {
            printf("grade B");
        }
        else if(marks>=40)
        {
            printf("grade c");
        }
        else
        {
            printf("fail");
        }

        return 0;
    }
      
     