class coordinate(object):
    def __init__(self,xval,yval):
        self.x=xval
        self.y=yval

    def distance(self,other):
        x_diff_sq= (self.x-other.x)**2
        y_diff_sq= (self.y-other.y)**2
        distance = (x_diff_sq+y_diff_sq)**0.5
        return distance
    
    def to_origin(self):
        self.x=0
        self.y=0

class circle(object):
    def __init__(self,coordi,radius):
        if type(coordi) != coordinate:
            raise ValueError
        if type(radius)!=int:
            raise ValueError
        self.cordi=coordinate
        self.r=radius


c=coordinate(3,4)
origin=coordinate(0,0)

print(c.distance(origin))
print(coordinate.distance(c,origin))
#c.to_origin()
#print(c.x,c.y)

c1=circle(c,5)