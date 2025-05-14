#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *nums = (int *)malloc(5 * sizeof(int));
    if(nums == NULL){
        printf("allocation failed");
        return 1;
    }
    nums[5];
    nums[0]=2;
    nums[1]=3;
    nums[2]=5;  
    nums[3]=8;
    nums[4]=9;
    int target;
    printf("enter target number: ");
    scanf("%d",&target);

    for(int i = 0; i < 5; i++){
        if(i<4 && nums[i] + nums[i+1] == target ){
            printf("required positions are : %d and %d",i,i+1);
            
            return 0;
        }
        else{
            for(int j = i+2; j<5; j++){
                printf("required positions are : %d and %d",i,j);
                
                return 0;
            }
        }
    }
    printf("target doesn't matched");
    free(nums);
    return 0;
}