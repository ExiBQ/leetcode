#include<stdio.h>
#include <stdlib.h>
int b;
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
	int i,j;
    int* ret = malloc(sizeof(int) * 2);
    //*returnSize = 2;
	for(i = 0; i < numsSize - 1; i++){
        for(j = i + 1; j < numsSize - 0; j++){
            //printf("%d %d %d\n",nums[i],nums[j],nums[i]+nums[j]);
            if(nums[i] + nums[j] == target){
                ret[0] = i;
                ret[1] = j;
                return ret;
            }
        }
	}
	return ret;
}
int incc(int* num){
    *num = 101;
}
void main(){
	int num[3] = {3,2,4};
	int *a = num;
    int tmpa = 0;
	int *c = twoSum(a,3,6,2);
	printf("%d,%d\n",c[0],c[1]);
	printf("%d\n",b);
	incc(&tmpa);
	printf("tmpa=%d",tmpa);
}
