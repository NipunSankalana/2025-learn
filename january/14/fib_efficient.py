def fib(x,d):
    if x in d:
        return d[x]
    else:
        ans = fib(x-1,d)+fib(x-2,d)
        d[x] = ans
        return ans
    
d = {1:1,2:1}
print(fib(100,d))