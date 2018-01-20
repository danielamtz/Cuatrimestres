from FiguraGeometrica import FiguraGeometrica

class Cuadrado(FiguraGeometrica):
    def __init__(self):
        self.__lado=0
    #se asigna un valor al atributo encapsulado
    def setLado(self,value):
        self.__lado=value

    # se lee/obtiene el valor del atributo encapsulado
    def getLado(self):
        return self.__lado

    def perimetro(self):
        return self.__lado * 4

    def Area(self):
        return self.__lado * self.__lado
