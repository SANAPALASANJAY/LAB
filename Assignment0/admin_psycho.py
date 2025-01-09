n = int(input())
nums = list(map(int, input().split()))
i = 0
swaps = 0
while (i < len(nums)):
    if (nums[i] == i + 1): i+=1
    else:
        temp = nums[i]
        nums[i] = nums[nums[i] - 1]
        nums[temp - 1] = temp
        swaps += 1

print(swaps)
