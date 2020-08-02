#include<stdio.h>
int main()
{
    int arr[10]={13,19,18,4,10,78,56,13,59,34};
    
    for(int i=0;i<10;i++)
    {
        for(int j=1+i;j<10;j++)
        {
            
            printf("i is %d and j is %d\n",i, j);
            
            if(arr[i]>arr[j])
                 {
                     int temp=arr[i];
                     arr[i]=arr[j];
                     arr[j]=temp;    
                     
                 }    
        }
     
    }
    
    for(int k=0;k<10;k++)
    {
        printf("%d\n",arr[k]);
    }   
}
