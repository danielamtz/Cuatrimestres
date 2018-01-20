class Trabajador:
    def __init__(self, nombre, puesto):
        self.nombre = nombre
        self.puesto = puesto
        self.sueldo = 0.0
        self.horasTrabajadas = 0
        self.impuestos = 0.0
        self.bono = 0.0
        self.acumuladorImpuestos = 0.0
        self.cantidadHoras = 0

    def calcularSueldo(self, cantidad):
        self.sueldo = cantidad * 100
        self.cantidadHoras = cantidad

    def calcularImpuestos(self, tipoImpuesto):
        if tipoImpuesto == 'IVA':
            self.impuestos = self.sueldo * 0.16
        elif tipoImpuesto == 'ISR':
            self.impuestos = self.sueldo * 0.32

        self.acumuladorImpuestos = self.acumuladorImpuestos + self.impuestos

    def calcularBono(self):
        if self.cantidadHoras > 40:
            self.bono = self.sueldo * 0.20

    def imprimir(self):
        print('%s (%s)' %(self.nombre, self.puesto))
        print('Sueldo: $%.2f' % self.sueldo)
        print('Impuestos: $%.2f' % self.acumuladorImpuestos)
        print('Bono: $%.2f' % self.bono)
