#include<stdio.h>
static int binarysearch(int *arr, int *guess, int *max, int *min, int target) {
    while(arr[*guess]!=target)
    {
        
        if(*max<*min)
        {
            printf("element not found\n");
           
            return 0;
           
            break;
        }
        else if(arr[*guess]<target)
        {
            
            *min=*guess+1;
            *guess=(*min+*max)/2;
            
            
            continue;
        }
        else if(arr[*guess]>target)
        {
            
            *max=*guess-1;
            *guess=(*min+*max)/2;
            
            continue;
        }
        
        
        
    }
    
    if(*max>*min || *max==*min)
    {
        printf("element found at %d\n", *guess);
        
        return 1;
        
    }
    
    return -1;
    
}

    
    
    

int main()
{
   
   
    int guess=0;
    int target;
    printf("enter the target number\n");
    scanf("%d",&target);
    
    
    int arr[10]={2,5,8,12,14,18,21,34,46,96};
    
    int min=0;
    int max=9;
    
    guess=(min+max)/2;
    
    
    
    
 
    
    
    binarysearch(arr, &guess, &max, &min, target);
  
    
   
    
    
   
}
