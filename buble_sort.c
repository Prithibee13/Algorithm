#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void Bubble(int A[],int n)
{
    int ptr,k,temp,i;
    float total_time;

    time_t t;
    clock_t start_t,end_t;
    time(&t);


    start_t = clock();


    for(k=1;k<=n-1;k++)
    {
        for(ptr=1;ptr<=n-k;ptr++)
        {
            if(A[ptr]>A[ptr+1])
            {
                temp=A[ptr];
                A[ptr]=A[ptr+1];
                A[ptr+1]=temp;
            }
        }
    }

    end_t = clock();

    printf("\nafter sorting Data \n\n");
    for(i=1; i<=n; i++)
    {
        printf("%d ",A[i]);
    }

    printf("\n");
    total_time = (double)(end_t - start_t);
    printf("Total time taken by CPU: %f", total_time);
}


int main()
{
    int i,n,A[320000];

    printf("How many data want to insert : ");
    scanf("%d", &n);

    for(i=1;i<=n;i++)
    {
        A[i] = rand() % 101;
    }

    printf("array Data\n\n");

    for(i=1;i<=n;i++)
    {
        printf("%d ", A[i]);
    }


    Bubble(A,n);

    return 0;
}
