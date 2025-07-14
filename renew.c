#include <stdio.h>
#include <stdlib.h>

int main() {
    int choice;

    while (1) {
        printf("\n------ Calculator Menu ------\n");
        printf("1. ADD\n");
        printf("2. SUBTRACT\n");
        printf("3. MULTIPLY\n");
        printf("4. DIVISION\n");
        printf("5. MOD\n");
        printf("6. PERCENTAGE\n");
        printf("7. AVERAGE (Multiple Numbers)\n");
        printf("8. EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        int x, y;
        double result;

        switch (choice) {
            case 1:
                printf("Enter First Number: ");
                scanf("%d", &x);
                printf("Enter Second Number: ");
                scanf("%d", &y);
                printf("SUM = %d\n", x + y);
                break;

            case 2:
                printf("Enter First Number: ");
                scanf("%d", &x);
                printf("Enter Second Number: ");
                scanf("%d", &y);
                printf("DIFFERENCE = %d\n", x - y);
                break;

            case 3:
                printf("Enter First Number: ");
                scanf("%d", &x);
                printf("Enter Second Number: ");
                scanf("%d", &y);
                printf("PRODUCT = %d\n", x * y);
                break;

            case 4:
                printf("Enter Dividend: ");
                scanf("%d", &x);
                printf("Enter Divisor: ");
                scanf("%d", &y);
                if (y == 0) {
                    printf("Error: Division by zero!\n");
                } else {
                    result = (double)x / y;
                    printf("QUOTIENT = %.2lf\n", result);
                }
                break;

            case 5:
                printf("Enter First Number: ");
                scanf("%d", &x);
                printf("Enter Second Number: ");
                scanf("%d", &y);
                if (y == 0) {
                    printf("Error: Modulo by zero!\n");
                } else {
                    printf("MOD = %d\n", x % y);
                }
                break;

            case 6:
                printf("Enter Obtained Marks: ");
                scanf("%d", &x);
                printf("Enter Total Marks: ");
                scanf("%d", &y);
                if (y == 0) {
                    printf("Error: Total cannot be zero!\n");
                } else {
                    result = ((double)x / y) * 100;
                    printf("PERCENTAGE = %.2lf%%\n", result);
                }
                break;

            case 7:
                {
                    int count;
                    double sum = 0.0, num;

                    printf("How many numbers do you want to average? ");
                    scanf("%d", &count);

                    if (count <= 0) {
                        printf("Please enter a valid number greater than 0.\n");
                        break;
                    }

                    for 
					(int i = 1; i <= count; i++) 
					{
                        printf("Enter number %d: ", i);
                        scanf("%lf", &num);
                        sum += num;
                    }

                    result = sum / count;
                    printf("AVERAGE = %.2lf\n", result);
                }
                break;

            case 8:
                printf("Exiting Calculator. Goodbye!\n");
                exit(0);

            default:
                printf("Invalid choice! Please select between 1 to 8.\n");
        }
    }

    return 0;
}
