"""
                    OPERATOR OVERLOADING 
"""

class Student:

    def __init__(self,m1,m2):
        self.m1=m1
        self.m2=m2
    
    def __add__(self,other):
        r1=self.m1+other.m1
        r2=self.m2+other.m2
        s3 =Student(r1,r2)
        return s3
    
    def __str__(self):
        return "{} {}".format(self.m1,self.m2)

    def __gt__(self,other):
        r1=self.m1+self.m2
        r2=other.m1+other.m2

        if r1>r2:
            return True
        return False

s1=Student(40,50)
s2=Student(39,82)
s4=Student(10,20)

s3=s1+s2+s4  # + is replaced by __add__ method 
# print(s3.m1,s3.m2)

print(s3)

print(s1) # it will call s3.__str__()
print(s2)
if s1>s2: # > is replaced by __gt__()
    print("S1 Wins !!")
else:
    print("S2 Wins !!")
