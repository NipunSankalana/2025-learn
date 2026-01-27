def quick_sort(arr):
    if len(arr)<2:
        return arr
        
    pivot=arr[len(arr)//2]
    
    equal=[x for x in arr if x==pivot]
    left=[x for x in arr if x<pivot]
    right=[x for x in arr if x>pivot]
    
    return quick_sort(left)+equal+quick_sort(right)
    
def closestNumbers(arr):
    # Write your code here
    sorted_arr=quick_sort(arr)
    min_diff=sorted_arr[-1]-sorted_arr[0]
    dic={}
    for i in range(len(sorted_arr)-1):
        diff=sorted_arr[i+1]-sorted_arr[i]
        if diff<=min_diff:
            if diff not in dic:
                dic[diff]=[]
            dic[diff].append(sorted_arr[i])
            min_diff=diff
    return dic[min_diff]

arr=[-20,-3916237,-357920,-3620601,7374819,-7330761,30,6246457,-6461594,266854]
print(closestNumbers(arr))