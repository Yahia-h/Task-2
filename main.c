#include <stdio.h>

int main()
{
    int min, max, sum, number, i;
    printf("\n Please Enter the Minimum & Maximum Values\n");
    scanf("%d %d", &min, &max);
    number=min;


    printf("Perfect Numbers Between %d and %d are:\n", min, max);
    for(number=min; number<=max; number++)
    {
        for(i=1, sum=0; i<number; i++)
            {
            if(number%i==0)
                sum=sum+i;
            };
        if(sum==number)
            printf("%d \n", number);
    };
    return 0;
}
