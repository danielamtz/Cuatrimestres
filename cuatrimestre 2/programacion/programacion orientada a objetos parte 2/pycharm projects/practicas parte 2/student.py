class student:
    def __init__(self,nombre,carrera,nivel):
        self.nombre= nombre
        self.carrera= carrera
        self.nivel=nivel
        self.calificaciones= []
        self.promedio=0

    def capturaDeCalificaciones(self,unidad,nota):
        self.calificaciones.insert(unidad, nota)

    def calcular_promedio(self):
        suma = 0
        for c in self.calificaciones:
            suma += c

        self.promedio = suma / len(self.calificaciones)


    def calculo(self):
        print "Nombre del alumno: ",self.nombre
        print "Carrera: ", self.carrera
        print "Cuatrimestre: ", self.nivel
        print "calificaciones: ",self.calificaciones
        print "Promedio final: ",self.promedio



