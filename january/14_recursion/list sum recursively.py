def total_rec(L):
    if len(L)==1:
        return len(L[0])
    else:
        return len(L[0])+total_rec(L[1:])
    
L=['ab','c','defgh']
print(total_rec(L))