def quick_sort(list):
    if len(list)<2:
        return list
    
    pivot=list[len(list)//2]
    left=[x for x in list if x<pivot]
    equal=[x for x in list if x==pivot]
    right=[x for x in list if x>pivot]
    
    return quick_sort(left)+equal+quick_sort(right)

print(quick_sort([1,7,8,9,5,4,8,6,3,7,9]))