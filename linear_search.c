#include<stdio.h>
int main()
{
    int n,key,i,found=0;
    printf("entre the value of n:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            printf("%d is fount at index %d",key,i);
            found=1;
            break;
            
        }
        
    }
    if(found==0)
    {
        printf("key is not found");
    }
}