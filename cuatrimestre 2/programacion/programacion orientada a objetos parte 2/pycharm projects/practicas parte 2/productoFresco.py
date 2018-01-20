from products import products


class productoFresco(products):
    def __init__(self):
        self.pais = " "
        self.dictionaryOfProducts = []

    def __str__(self):
        return "Nombre: %s | Codigo: %s\n" \
               "Pais de origen:%s \n"\
               "Fecha de caducidad: %s|%s|%s\n"% (self.getName(), self.getCode(),self.pais,self.caducidad2.day,self.caducidad2.month,self.caducidad2.year)


    def ingresaPais(self, pais):
        self.pais = pais
