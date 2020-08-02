#include<stdio.h>
static void selectionSort(int *arr, int len) {
    for(int i=0;i<len;i++)
    {
        for(int j=1+i;j<len;j++)
        {
            
            
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        
    }
    
    printf("////////////\\\\\\\\\\\\\\\n");
    
    for(int k=0;k<len;k++)
    {
        printf("%d\n",arr[k]);
    }
}

int main()
{
    int arr[1000];
    int len;
    printf("enter the size of an array\n");
    scanf("%d",&len);
    
    for(int i=0;i<=len-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    selectionSort(arr,len);   
    }
 
