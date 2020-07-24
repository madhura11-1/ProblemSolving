arr = [0,1,1,1,2,3,6,7,8,9]
k = 9
x = 4
i =0
j = len(arr) -1
ans = []
count = 0

for i in range(len(arr)):
    if abs(arr[i] - x) <= abs(arr[j]-x) and count < k:
        ans.append(arr[i])
        i += 1
        count += 1
    else:
        if count < k:
            ans.append(arr[j])                                 # not all test cases are passing           
            j -= 1
            count += 1

print(ans)


