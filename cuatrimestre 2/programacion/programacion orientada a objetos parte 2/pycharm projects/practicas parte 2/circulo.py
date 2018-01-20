from FiguraGeometrica import FiguraGeometrica
import math
class circulo(FiguraGeometrica):
    def __init__(self):
        self.radio= 0.0

    def perimetro(self):
        return math.pi*self.radio*2

    def Area(self):
        #return math.pi *self.radio *self.radio
        return math.pi * math.pow(self.radio,2)