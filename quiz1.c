#include <stdio.h>

int main()
{
    int sub;
    printf("Please tell the number subjects you passed in: \n");

    scanf("%d", &sub);
    printf("You have passed in :%d subjects\n", sub);

    if (sub>=2)
    {
        printf("You have earned 45 points\n");
    }
    else
    {
        printf("You have earned 15 points\n");
    }
    
    return 0;
}
