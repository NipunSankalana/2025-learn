def merge(left,right):
    result=[]
    i,j=0,0
    while i<len(left) and j<len(right):
        if left[i]<right[j]:
            result.append(left[i])
            i+=1
        else:
            result.append(right[j])
            j+=1
    while i<len(left):
        result.append(left[i])
        i+=1
    while j<len(right):
        result.append(right[j])
        j+=1
    return result

def merge_sort(list):
    if len(list)<2:
        return list[:]
    else:
        middle=len(list)//2
        left=merge_sort(list[:middle])
        right=merge_sort(list[middle:])
        return merge(left,right)
    
print(merge_sort([9,5,1,7,6,8,4]))