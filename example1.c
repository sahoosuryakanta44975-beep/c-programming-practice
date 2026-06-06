#include <stdio.h>

int main()
{
    int password;
    char username[20];

    printf("Enter username: ");
    scanf("%s", username);

    printf("Enter password: ");
    scanf("%d", &password);

    if(password == 1234)
    {
        printf("Login Successful");
    }
    else
    {
        printf("Invalid Username or Password");
    }

    return 0;
}