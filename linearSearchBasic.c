#include<stdio.h>
int main()
{

    int target;
    printf("enter the target number\n");
    scanf("%d",&target);
    int loop=10;
    
    int arr[10]={2,5,8,12,14,18,21,34,46,96};
    

    while(loop)
    {
        if(arr[loop]==target)
        {
            printf("element found\n");
        }
        loop--;
}
    if(loop==0)
    {
        printf("elememt not found\n");
    }
    
}
