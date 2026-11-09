#include<stdio.h>
int main()
 {
    int a[100],i,n,count=0,sum=0;
    printf("enter  n number ");
    scanf("%d",&n);

    printf("enter %d numbers:\n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("odd numbers are:\n");
    for(i=0; i<n; i++)
    {
        if(a[i] % 2!=0)
        {
            count++;
            sum = sum + a[i];
            printf("%d",a[i]);

        }
              
    }
    printf("count of odd numbers: %d\n", count);
    printf("sum of odd numbers: %d\n", sum);

     return 0;
 }