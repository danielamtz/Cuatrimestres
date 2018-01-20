from datetime import datetime
from student_ import Student

myPersona = Student()
myPersona.name = raw_input("Name: ")
date = raw_input("Birthdate (DD/MM/YYYY): ")
myPersona.birthdate = datetime.strptime(date, "%d/%m/%Y")
print ("Age %d" % myPersona.getAge())
myPersona.setLevel(raw_input("Level: "))
print ("Your level is:"+myPersona.getLevel())
myPersona.setCarrer(raw_input("Carrerr: "))
print ("Your carrer is: "+ myPersona.getCarrer())

response = "Y"
while response == "Y":
    myPersona.setGrade(float(input("Grade: ")))
    response = input("Another grade (Y/N): ")

print("---\nName: %s" % myPersona.name)
print("Age: %d" % myPersona.getAge())
print("Carrer: %s | Level: %s" % (myPersona.getCarrer(), myPersona.getLevel()))
print("Grades: %s " % myPersona.getGrades())
print("Average: %.2f" % myPersona.getAverage())
