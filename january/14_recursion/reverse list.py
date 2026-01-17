def reverse(l):
    if len(l)==0:
        return l
    else:
        return reverse(l[1:])+[l[0]]
    
l=[1,2,3,4]
print(reverse(l))