from Person import Person


class Student(Person):
    def __init__(self):
        self.__level = 0
        self.__carrer = ''
        self.__grades = []
        self.__average = 0.0

    def setLevel(self, value):
        self.__level = value

    def getLevel(self):
        return self.__level

    def setCarrer(self, value):
        self.__carrer = value

    def getCarrer(self):
        return self.__carrer

    def setGrade(self, value):
        self.__grades.append(value)

    def getGrades(self):
        return self.__grades

    def getAverage(self):
        sum = 0
        for g in self.__grades:
            sum += g
        self.__average = sum / len(self.__grades)

        return self.__average
