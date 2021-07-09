#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void insertion_sort(int n,int A[])
{
    int c,k,s,i,j;
    float total_time;

    time_t t;
    clock_t start_t,end_t;
    time(&t);


    start_t = clock();

    for(j=2;j<=n;j++)
    {
        k = A[j];
        i = j-1;
        while(i>0 && A[i]>k)
        {
            A[i+1] = A[i];
            i--;
        }
        A[i+1] = k;
    }
    end_t = clock();

    for(i=1;i<=n;i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
    total_time = (double)(end_t - start_t);
    printf("Total time taken by CPU: %f", total_time);
}



int main()
{
    int n,i,j,l,A[320000];

    printf("How many data want to insert : ");
    scanf("%d",&n);

    for(j=1;j<=n;j++)
    {
        A[j] = rand()%101;
    }
    printf("\n");

    for(j=1;j<=n;j++)
    {
        printf("%d ", A[j]);
    }

    printf("\n\n\n");

    insertion_sort(n,A);
    return 0;
}
