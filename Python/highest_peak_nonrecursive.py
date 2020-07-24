nums = [4,1,3]
l = 0
r = len(nums) - 1
while (l < r):
    mid = (l + r) // 2
    if (nums[mid] > nums[mid + 1]):                     # it doesni work the otehr way coz index out of bound range exception occurs
        r = mid                                         # if nums[mid] > nums[m-1]  here mid-1 can go beyonf 0 alo
    else:                                               # if so u need to do extra check that l dooes not go beyound 0
        l = mid + 1
print(nums[l])