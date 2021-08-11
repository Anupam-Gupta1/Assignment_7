#include <stdio.h>

//function for inversion count
void inversion_count(int a[], int n)
{
    int count = 0;
    int i,j;
    for(i = 0; i < n; i++)
    {
        for(j = i+1; j < n; j++)
        {
            if(a[i] > a[j] && i < j)
            {
                count++;
            }
        }
    }
    printf("%d", count);
}

int main()
{
    int n,i;
    scanf("%d", &n);
    int a[n];
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    //calling function for inversion count
    inversion_count(a, n);
    return 0;
}
