class stack(object):
    def __init__(self):
        self.stack=[]

    def push(self,item):
        self.stack.append(item)

    def is_empty(self):
        return len(self.stack)==0

    def pop(self):
        if not self.is_empty():
            return self.stack.pop()
        else:
            return "stack is empty"
        
    def peak(self):
        if not self.is_empty():
            return self.stack[-1]
        else:
            return "stack is empty"

s = stack()
s.push(10)
s.push(20)
print(s.pop())