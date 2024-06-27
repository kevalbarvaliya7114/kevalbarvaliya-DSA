#include <stdio.h>
int main()
{
    int n1,n2;
    printf("Enter you Arry1 size:-");
    scanf("%d",&n1);
    printf("Enter you Arry2 size:-");
    scanf("%d",&n2);
    int arr1[n1], arr2[n2];
    printf("enter the array:");
    for (int i = 0; i < n1; i++)
    {   //arr1[i]=i;
        scanf("%d", &arr1[i]);
    }
    printf("enter the array2:");
    for (int i = 0; i < n2; i++)
    {   //arr2[i]=i+10;
        scanf("%d", &arr2[i]);
    }
    int arr3[n1+n2];
    
    for (int i = 0; i < n1+n2; i++)
    {
       /* if(i<n1)
        arr3[i] = arr1[i];
        
        else
        arr3[i] = arr2[i-n1];
        */
       arr3[i]=i<n1?arr1[i]:arr2[i-n1];
    }
    for (int i = 0; i < n1+n2; i++)
    {
        printf(" %d",arr3[i]);
    }
    
}
