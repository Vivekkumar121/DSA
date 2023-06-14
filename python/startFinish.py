start = [1,0,3,2,7]
finish = [5,2,5,7,9]
result = [0,0,0,0,0]
duplicate = []
same = []
for i in range(5) :
    result[i] = (finish[i] - start[i])
    
print("The minimum number is : ",min(result))
for i in result :
    if i not in same :
        same.append(i)
    elif i not in duplicate :
        duplicate.append(i)
        
print("The repeated number is : ",duplicate)