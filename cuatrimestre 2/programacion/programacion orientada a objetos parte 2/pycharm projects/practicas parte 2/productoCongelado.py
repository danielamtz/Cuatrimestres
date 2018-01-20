from products import products

class productoCongelado(products):
    def __init__(self):
        self.__pais = " "
        self.__temperatura=" "

    def setpaisOrigen(self,pais):
        self.__pais=pais

    def getPaisOrigen(self):
        return self.__pais

    def setTemperatuaIdeal(self,temperatura):
        self.__temperatura=temperatura

    def getTemperaturaIdeal(self):
        return self.__temperatura

    def __str__(self):
        return "Nombre: %s | Codigo: %s\n"\
               "Pais de origen: %s \n"\
               "Temperatura: %s \n"\
               "Fecha de caducidad: %s|%s|%s"% (self.getName(), self.getCode(),self.getPaisOrigen(),self.getTemperaturaIdeal(),self.caducidad2.day,self.caducidad2.month,self.caducidad2.year)


