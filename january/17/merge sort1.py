def merge_sort(l):
    if len(l)==1:
        return l
        
    else:
        length=len(l)
        left = merge_sort(l[:int(length/2)])
        right= merge_sort(l[int(length/2):length])
        i=0
        list=[]
        while i<len(left) or i<len(right):
            if left[i]>right[i]:
                list.append(right[i])
                list.append(left[i])
            else:
                list.append(left[i])
                list.append(right[i])
            i+=1
        return list
    
l=[1,4,9,6,5,2,3,7]
print(merge_sort(l))