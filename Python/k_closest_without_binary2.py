def binarySearch(nums, target):
    if len(nums) == 0:
        return -1

    left, right = 0, len(nums) - 1
    while left <= right:
        mid = (left + right) // 2
        if nums[mid] == target:
            return mid
        elif nums[mid] < target:
            left = mid + 1
        else:
            right = mid - 1

    return -1


nums = [1,2,3,4,5]
x = 3
k = 4
n = len(nums)
ans = []
if x <= nums[0] :
    print(nums.subList(0,k))
elif x >= nums[len(nums)-1]:
    print(nums.subList(n-k,n))
else:
    found = binarySearch(nums,x)
    if found == -1:
        print("o")
    else:
        i = found-k+1
        j = found+k
        if i < 0:
            i = 0
        if j > n-1:
            j = n-1
count = 0
while(count != k):
    if nums[i] < x:
        
