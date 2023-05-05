class A:
    classVar=0                    #Static or Class Variable
    def __init__(self,instanceVar):
        self.instanceVar=instanceVar   #Instance Variable...belongs to and object 
        A.classVar+=1
    
    def print_(self):
        print("Class Var:",A.classVar," Obj Var:",self.instanceVar)

a1=A(30)
a2=A(40)

a1.print_()