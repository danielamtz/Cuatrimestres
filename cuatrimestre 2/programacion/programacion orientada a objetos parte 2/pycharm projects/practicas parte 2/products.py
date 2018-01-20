from datetime import datetime


class products:
    def __init__(self):
        self.__fechaEnvasado = 0
        self.fechaEnvasado = " "
        self.lote = " "
        self.productos = []
        self.__codigo = " "
        self.__name = " "
        self.__cantidad = 0
        self.dictionaryOfProducts = []
    def setCode(self, value):
        self.__codigo = value

    def getCode(self):
        return self.__codigo

    def setName(self, value):
        self.__name = value

    def getName(self):
        return self.__name

    def __str__(self):
        return 'Code: %s | Name: %s' % (self.__code, self.__name)


    def setCantidad(self, value):
        self.__cantidad = value

    def getCantidad(self):
        return self.__cantidad

    def getCad(self):
        self.__fechaEnvasado()


    def Caducidad(self,date):
        self.hoy = datetime.today()

        self.caducidad2 = datetime.strptime(date, '%d/%m/%Y')

        return (self.hoy.year, self.hoy.month, self.hoy.day) > (self.caducidad2.year, self.caducidad2.month, self.caducidad2.day)
