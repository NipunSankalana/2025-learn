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
        self.cordi=coordi
        self.r=radius

    def is_inside(self,point):
        if coordinate.distance(self.cordi,point)<self.r:
            return True
        else:
            return False
        
    def is_inside1(self,point):
        if self.cordi.distance(point)<self.r:
            return True
        else:
            return False
        
    def is_inside2(self,point):
        if point.distance(self.cordi)<self.r:
            return True
        else:
            return False


codi=coordinate(1,1)
origin=coordinate(0,0)

print(codi.distance(origin))
print(coordinate.distance(codi,origin))
#c.to_origin()
#print(c.x,c.y)

cir1=circle(origin,5)
print(circle.is_inside(cir1,codi))