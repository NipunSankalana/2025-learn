def isBalanced(s):
    # Write your code here
    list=[]
    index=-1
    dic={'[':']' ,'(':')','{':'}'}
    push_char=['(','[','{']
    for char in s:
        if char in push_char:
            list.append(char)
            index+=1
        elif dic[list[index]]==char:
            list.pop()
            index-=1
        else:
            return "NO"
    
    if index==-1:
        return "YES"
    else:
        return "NO"
    
print(isBalanced('{[(])}'))
