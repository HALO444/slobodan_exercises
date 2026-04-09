class student:
        univercity = 'sri jayawardanapura' #class variable

        def __init__(self,id,name,course):
                self.id = id
                self.name = name
                self.course = course
                

stu1 = student(100,'madhushanka','information system')
stu2 = student(110,'iman','computer science')

print(f"{stu1.name} is {stu1.course} student from {stu1.univercity} univercity.His student id is {stu1.id}.")
print(f"{stu2.name} is {stu2.course} student from {stu2.univercity} univercity.His student id is {stu2.id}.")        
