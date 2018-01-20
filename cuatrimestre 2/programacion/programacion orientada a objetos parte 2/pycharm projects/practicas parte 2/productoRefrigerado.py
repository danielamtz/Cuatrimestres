from products import products

class productoRefrigerado(products):
    def __init__(self):
        self.__nombreEmpresa=" "
        self.__ciudadEmpresa=" "
        self.__temperatura=" "

    def setNombreEmpresa(self,name):
        self.__nombreEmpresa=name

    def getNombreEmpresa(self):
        return self.__nombreEmpresa

    def setCiudadEmpresa(self,ciudad):
        self.__ciudadEmpresa=ciudad

    def getCiudadEmpresa(self):
        return self.__ciudadEmpresa

    def setTemperatuaIdeal(self,temperatura):
        self.__temperatura=temperatura

    def getTemperaturaIdeal(self):
        return self.__temperatura

    def __str__(self):
        return "Nombre: %s | Codigo: %s\n"\
               "Nombre de la empresa supervisora: %s \n"\
               "Ciudad de la empresa supervisora: %s \n"\
               "Temperatura:%s \n "\
               "Fecha de caducidad: %s|%s|%s \n"% (self.getName(), self.getCode(),self.getNombreEmpresa(),self.getCiudadEmpresa(),self.getTemperaturaIdeal(),self.caducidad2.day,self.caducidad2.month,self.caducidad2.year)
