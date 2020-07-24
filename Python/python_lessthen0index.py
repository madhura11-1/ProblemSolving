def binary(nums,target,l,h):
    print(l,h)
    while (l<=h):
        m=(l+h)//2
        if nums[m] == target:
            return m
        elif (nums[m]<target):
            l=m+1
        else:
            h=m-1
    return -1
    
def search():
    nums = [4,5,6,7,0,1,2]
    target = 0
    i =0
    p = -1
    while(i+1 < len(nums) and nums[i] < nums[i+1]):
        i += 1
    print(i)
    maxi = nums[i]
    print(maxi)
    if target < maxi and target > nums[0]:
        print("here")
        p = binary(nums,target,0,i-1)
    else:
        print("there")
        p = binary(nums,target,i+1,len(nums)-1)
    return p

print(search())
            