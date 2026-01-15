def check_item(l,e):
    if len(l)==0:
        return l[0]==e
    else:
        if l[0]==e:
            return True
        else:
            return check_item(l[1:],e)

l=[1,2,3,4,5,6]
print(check_item(l,5))
print(check_item(l,6))