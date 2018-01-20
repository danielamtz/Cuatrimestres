from FiguraGeometrica import FiguraGeometrica

class rectangulo(FiguraGeometrica):
    def __init__(self):
        self.base= 0.0
        self.altura=0.0

    def perimetro(self):
        return (self.base*2) +(self.altura*2)

    def Area(self):
        return self.base* self.altura