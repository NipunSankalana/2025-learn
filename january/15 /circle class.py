class Circle():
    def __init__(self, radius):
        """ Initializes self with radius """
        # your code here
        self.r=radius

    def get_radius(self):
        """ Returns the radius of self """
        # your code here
        radius=self.r
        return radius

    def get_area(self):
        """ Returns the area of self using pi = 3.14 """
        # your code here
        area=22/7*self.r**2
        return area

    def equal(self, c):
        """ c is a Circle object
        Returns True if self and c have the same radius value """
        # your code here
        if self.r==c.r:
            return True
        else:
            return False

    def bigger(self, c):
        """ c is a Circle object
        Returns self or c, the Circle object with the bigger radius """
        # your code here
        if self.r>c.r:
            return True
        else:
            return False
        
c=Circle(7)
d=Circle(7)
e=Circle(8)
print(Circle.get_area(c))
print(Circle.equal(c,d))
print(Circle.equal(c,e))