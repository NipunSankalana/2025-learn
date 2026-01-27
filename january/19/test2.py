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

def merge_sort(arr):
    if len(arr)<2:
        return arr
    else:
        middle=len(arr)//2
        left=merge_sort(arr[:middle])
        right=merge_sort(arr[middle:])
    return merge(left,right)
        
        
def activityNotifications(expenditure, d):
    # Write your code here
    count=0
    for i in range(0,len(expenditure)-d):
        list=expenditure[i:d+i]
        d_list=merge_sort(list)
        if len(d_list)%2!=0:
            median=d_list[len(d_list)//2]
        else:
            median=(d_list[len(d_list)//2]+d_list[len(d_list)//2-1])/2
        if median*2<=expenditure[i+d]:
            count+=1
    return count

e=[2,3,4,2,3,6,8,4,5]
d=5
print(activityNotifications(e,d))