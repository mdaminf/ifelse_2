// WAP to find the sum of all the odd numbers between numbers entered by the user.

#include<stdio.h>
int main()
{
    int start, end, temp, i, sum;

    printf("Enter first number: ");
    scanf("%d", &start);

    printf("Enter second number: ");
    scanf("%d", &end);

    if(start>0||end<0)
    {

        if(start>end)
        {
            temp=start;
            start=end;
            end=temp;
        }

        for(i=start; i<=end; i++)
        {
            if(i%2!=0)
                sum=sum+i;

        }

    }

    printf("Sum of odd numbers: %d\n",sum);
    
return 0;
    
}