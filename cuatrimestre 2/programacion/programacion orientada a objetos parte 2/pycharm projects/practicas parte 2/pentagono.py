from FiguraGeometrica import FiguraGeometrica
class pentagono(FiguraGeometrica):
    def __init__(self):
        self.l=0.0
        self.ap=0.0


    def perimetro(self):
        return self.l*5

    def Area(self):
        return (self.l*5)*(self.ap)/2
