def merge_sort(l):
    if len(l)==2:
        if l[0]>l[1]:
            l[0],l[1]=l[1],l[0]
            return l
        else:
            return l
        
    else:
        length=len(l)
        left = merge_sort(l[:int(length/2)])
        right= merge_sort(l[int(length/2):length])
        for i in range
        
        
