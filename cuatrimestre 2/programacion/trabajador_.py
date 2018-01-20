class trabajador:
    def __init__(self):
        self.nombre= " "
        self.puesto= " "
        self.sueldo=0
        self.salario=0
        self.Iva=0.16
        self.isr=0.32
        self.imp=0
        self.imp2= 0
        self.imp3=0
        self.imp3_=0
        self.conIva=0
        self.conIsr= 0
        self.dosImpuestos=0
        self.sueldoFinal= 0
        self.sueldoImpuestos=0
        self.plus= 0
        self.retencion=0
        self.bono=0
        self.horas=0
        self.estimulos=0
        self.sueldoSinRetencion=0
        self.num=3

    def ingresoNombre(self,nombre):
        self.nombre=nombre

    def calculoDeSalario(self,horas,sueldo):
        self.salario= sueldo*horas
        self.horas=horas

    def retencionDeImpuestos(self, opcion):
            self.iva = 0.16
            self.isr = 0.32
            if opcion == 'IVA':
                self.imp = self.salario * self.iva
                self.retencion = self.imp
                self.sueldoImpuestos = self.salario - self.retencion

            if opcion == "ISR":
                self.imp2 = self.salario * self.isr
                self.retencion=self.imp2
                self.sueldoImpuestos = self.salario - self.retencion

            if opcion== "LOS DOS":
                self.imp3=self.salario*self.iva
                self.imp3_=self.salario*self.isr
                self.dosImpuestos=self.imp3+self.imp3_
                self.retencion=self.dosImpuestos
                self.sueldoImpuestos=self.salario-self.retencion


    def function(self):
        if self.horas > 40:
          self.plus=self.salario*.20
          self.bono=self.plus+self.salario-self.retencion
          self.sueldoFinal=self.bono
        else:
            self.sueldoFinal=self.sueldoImpuestos



    def printtoscreen(self):
        print "Nombre del trabajador: ", self.nombre
        print "Retencion total: ",self.retencion
        print "Estimulos ganados:",self.plus
        print "Salario final: ", self.sueldoFinal