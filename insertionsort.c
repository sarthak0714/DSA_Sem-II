#include<stdio.h>
void InsertionSort(int a[], int n)
{
    int i,j;
    for (int i=1; i<n; i++){
        int j = i-1;
        int x = a[i];
        while (j>-1 && a[j] > x){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = x;
    }
}

void main(){
    int n;
    printf("enter no of elements to be sort: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements to sort:\n");
    for(int k=0;k<n;k++)
    {
        scanf("%d",&a[k]);
    }
    InsertionSort(a,n);
    printf("Elements after sorting:\n");
    for(int k=0;k<n;k++)
    {
        printf("%d ",a[k]);
    }
}