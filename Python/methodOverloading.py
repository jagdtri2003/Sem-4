"""
                            ##  Method Overloading  ##

->Python doesn't support method overloading by default like in other language,Java etc.

"""

class Computer:
    
    def process(self,p1=None,p2=None,p3=None):
        if p1!=None and p2!=None and p3!=None:
            print("P1 is running ")
            print("P2 is running ")
            print("P3 is running ")
        elif p1!=None and p2!=None:
            print("P1 is running ")
            print("P2 is running ")
        else:
            print("P1 is running ")
    
c1=Computer()

c1.process(1,2)
c1.process(1,2,3)