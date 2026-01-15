class coordinate(object):
    def __init__(self,xval,yval):
        self.x=xval
        self.y=yval

    def distance(self,other):
        x_diff_sq= (self.x-other.x)**2
        y_diff_sq= (self.y-other.y)**2
        distance = (x_diff_sq+y_diff_sq)**0.5
        return distance

c=coordinate(3,4)
origin=coordinate(0,0)

print(c.distance(origin))
print(coordinate.distance(c,origin))