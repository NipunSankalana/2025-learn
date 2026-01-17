import time

def fib(x):
    if x==1 or x==2:
        return 1
    else:
        return fib(x-1)+fib(x-2)
    
def fib_eff(x,d):
    if x in d:
        return d[x]
    else:
        ans=fib_eff(x-1,d)+fib_eff(x-2,d)
        d[x]=ans
        return ans

st1=time.perf_counter()
print(fib(35))
end1=time.perf_counter()
print(f"time = {st1-end1}")

st1=time.perf_counter()
d={1:1,2:1}
print(fib_eff(35,d))
end1=time.perf_counter()
print(f"time = {st1-end1}")