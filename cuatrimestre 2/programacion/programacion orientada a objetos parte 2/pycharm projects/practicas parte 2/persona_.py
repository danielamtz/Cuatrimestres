from datetime import datetime


class persona:
    def __init__ (self):
        self.name= " "
        self.__age=0
        self.birthdate= datetime.today()

    def getAge(self):
        self.__calculateAge()
        return self.__age
    def __calculateAge(self):
        today= datetime.today()
        self.__age= today.year - self.birthdate.year-(
            (today.month,today.day)< (self.birthdate.month, self.birthdate.day))