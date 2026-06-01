#include <stdio.h>

int main() {
    float math, english, science;
    float total, percentage;
    char grade;

    // Marks input
    printf("Enter Math marks: ");
    scanf("%f", &math);

    printf("Enter English marks: ");
    scanf("%f", &english);

    printf("Enter Science marks: ");
    scanf("%f", &science);

    // Total and percentage
    total = math + english + science;
    percentage = total / 3;

    // Grade calculation
    if (percentage >= 90)
        grade = 'A';

    else if (percentage >= 75)
        grade = 'B';

    else if (percentage >= 60)
        grade = 'C';

    else if (percentage >= 40)
        grade = 'D';

    else
        grade = 'F';

    // Output
    printf("\n----- RESULT -----\n");
    printf("Total Marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);

    return 0;
}