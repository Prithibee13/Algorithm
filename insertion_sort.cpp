#include<bits/stdc++.h>
#include<ctime>
#include<cstdio>

using namespace std;

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
        cout<<A[i] << " ";
    }
    cout<< "\n" <<endl;
    total_time = (double)(end_t - start_t);
    printf("Total time taken by CPU: %f", total_time);
}
int main()
{
    int n,i,j,l,A[320000];

    cout << "How many data want to insert"<<endl;
    cin >> n;

    for(j=1;j<=n;j++)
    {
        A[j] = rand()%101;
    }

    for(j=1;j<=n;j++)
    {
        cout << A[j] <<" ";
    }

    cout<< "\n" <<endl;

    insertion_sort(n,A);
    return 0;
}
