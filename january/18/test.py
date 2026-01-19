def largestRectangle(h):
    # Write your code here
    area_list=[]
    length=len(h)
    for i in range(length):
        area=(length-i)*h[i]
        if len(area_list)==0:
            area_list.append(area)
        elif area_list[-1]<area:
            area_list.append(area)
        else:
            return area
        
h=[1,2,3,4,5]
print(largestRectangle(h))