from datetime import datetime


class cad:
    def __init__(self):
        self.__fechaEnvasado = 0
        self.caducidad = datetime.today()
        self.caduco="CADUCO"
        self.vigente="VIGENTE"

    def getCad(self):
        self.__fechaEnvasado()


    def getNet(self):
        today = datetime.today()
        if (today.year > self.caducidad.year or today.day > self.caducidad.day or today.month > self.caducidad.month):
            return self.caduco
        else:
            return self.vigente
