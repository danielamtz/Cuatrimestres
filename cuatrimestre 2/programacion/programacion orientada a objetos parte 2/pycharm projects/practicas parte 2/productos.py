from datetime import datetime
class productos:
    def __init__(self):
        self.fechaCaducidad= datetime.today()
        self.numeroLote=" "

    def Caducidad(self):
        today = datetime.today()
        if (today.year >self.fechaCaducidad.year or today.day>self.fechaCaducidad.day or today.month>self.fechaCaducidad.month):
            print "CADUCO"
        else:
            print "VIGENTE"

