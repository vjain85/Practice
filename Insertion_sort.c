#include<stdio.h>
#include<conio.h>

void InsertionSort(int ar[],int n)
{
    int i,j,index,k;
    for(i=1;i<n;i++)
    {
        index = ar[i];
        printf("\n\n index  = %d i = %d j = %d",index,i,j);
        for(j=i;j>0&&ar[j-1]>index;j--)
         {
             ar[j] = ar[j-1];
             printf("\n\n ar[j] = %d, ar[j-1] = %d",ar[j],ar[j-1]);
             printf("\n List: ");
             for(k=0;k<n;k++)
             {
                 printf(" %d ",ar[k]);
             }
         }
        ar[j] = index;
    }
    printf("\nSorted array: ");
    for(i=0;i<n;i++)
        printf(" %d",ar[i]);

}

int main()
{
    int i,n = 7;
    int ar[] = {8,6,9,4,3,2,1};
    printf("INSERTION SORT:\n");
    printf("\nUnsorted array: ");
    for(i=0;i<n;i++)
        printf(" %d",ar[i]);
    InsertionSort(ar,n);
    getch();
    return 0;
}
