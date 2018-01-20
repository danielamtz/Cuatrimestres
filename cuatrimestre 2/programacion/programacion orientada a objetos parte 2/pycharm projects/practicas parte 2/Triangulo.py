from FiguraGeometrica import FiguraGeometrica

class triangulo(FiguraGeometrica):
    def __init__(self):
        self.base=0.0
        self.altura=0.0
        self.lado=0.0
        self.lado2=0.0
        self.lado3=0.0

    def perimetro(self, perimeter):
        if(perimeter=="Equilatero"):
            return self.lado *3
        elif (perimeter== "Escaleno"):
            return self.lado+self.lado2+self.lado3
        else:
            return (self.lado*2)+(self.lado3)

    def Area(self):
        return self.base* self.altura/2