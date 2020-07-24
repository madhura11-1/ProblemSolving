def find(l,h,nums):
        if h-l >= 3:
            m = (l+h)//2
            z = 0
            if m>=1 and m < len(nums)-1 and nums[m] > nums[m-1] and nums[m] > nums[m+1]:
                return m
            else:
                if(m>=1 and m <len(nums)-1):
                    z = find(l,m-1,nums)
                    z = find(m+1,h,nums)
            return z
        else:
            return nums.index((max(nums)))

nums = [3,1,2]
l = 0
h = len(nums)-1
if len(nums) <= 3:
    print(nums.index((max(nums))))
p = find(l,h,nums)
print(p) 