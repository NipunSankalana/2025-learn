def quick_sort(list):
    if len(list)<2:
        return list
    else:
        pivot=list.pop()
    left=[]
    right=[]
    for i in list:
        if i<pivot:
            left.append(i)
        else:
            right.append(i)
    
    return quick_sort(left)+[pivot]+quick_sort(right)

print(quick_sort([1,7,8,9,5,4,8,6,3,7,9]))