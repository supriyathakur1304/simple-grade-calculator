#include <stdio.h>

int main()
{

    int marks;

    printf("Enter the marks :");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100)
    {
        printf("enter the vaild marks 0 to 100\n :");
    }

    else if (marks >= 90)
    {
        printf("your grade is A. Excellent work!\n ");
    }
    else if (marks >= 80)
    {
        printf("your grade is grade B. Well done. \n ");
    }
    else if (marks >= 70)
    {
        printf("your grade is C. Good job.\n ");
    }

    else if (marks >= 35)
    {
        printf("your grade is D. You passed, but you could do better.\n ");
    }
    else if (marks < 35)
    {
        printf("you fail\n ");
    }

    else
    {
        printf("invalid number\n");
    }

    return 0;
}