from datetime import datetime
from Student import Student

jl = Student()
jl.name = input("Name: ")
date = input("Birthdate (DD/MM/YYYY): ")
jl.birthdate = datetime.strptime(date, '%d/%m/%Y')
jl.setLevel(2)
jl.setCarrer("ISW")

response = "Y"
while response == "Y":
    jl.setGrade(float(input("Grade: ")))
    response = input("Another grade (Y/N): ")

print("---\nName: %s" % jl.name)
print("Age: %d" % jl.getAge())
print("Carrer: %s | Level: %s" % (jl.getCarrer(), jl.getLevel()))
print("Grades: %s " % jl.getGrades())
print("Average: %.2f" % jl.getAverage())
