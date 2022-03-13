#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int i = 0;
    int y = 0;
    
    while (i < numsSize)
    {
        y = i + 1;
        while (y < numsSize - 1)
        {
            if (nums[i] + nums[y] != target)
                y++;
            else
            {
                returnSize = malloc(sizeof(int) * numsSize);
                printf("nums[i]: %i\t\tnums[y]: %i\n", nums[i], nums[y]);
                *returnSize[0] = i;
                *returnSize[1] = y;
                printf("returnSize[0]: %i\treturnSize[1]: %i\n", returnSize[0], returnSize[1]);
                return (returnSize);
            }
        }
    }
    return (0);
}

int	main(void)
{
	int nums[4] = {2, 7, 11, 15};
	int *returnSize;

	twoSum(nums, 4, 9, returnSize);
	free(*returnSize);

	return (0);
}
