arr = [1,2,3,4,5]
k = 4
x = 6
l = 0
h = len(arr) - 1
m = 0
result = []
found = -1
while(l <= h):
    m = l + (h-l)//2
    if arr[m] == x : 
        found = m
        break
    elif arr[m] > x :
        h = m-1
    else:
        l = m+1
                
part1 = k//2 + 1
part2 = k - part1
        
if found == -1 :
    z = 0
    while(z < k):
        result.append(arr[z])                                        # wrong understanding of question even if number is not inside the array
        z += 1                                                       # u need to find the k numbers closest to x even if x is not in array 
        print(result)
y = abs(part1-1-found)
v = 0
while(v < part1):
    result.append(arr[y])
    v += 1
    y += 1
u = abs(found + part2)
while(part2>0):
    result.append(arr[u])
    part2 -= 1
    v += 1
print(result)