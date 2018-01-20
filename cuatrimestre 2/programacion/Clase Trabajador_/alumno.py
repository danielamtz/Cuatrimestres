class Student:
    def __init__(self, name, carrera, nivel):
        self.nombre = name
        self.carrera = carrera
        self.nivel = nivel
        self.calificaciones = []
        self.promedio = 0.0

    def capturar_calificaciones(self, unidad, calificacion):
        self.calificaciones.insert(unidad, calificacion)

    def calcular_promedio(self):
        suma = 0
        for c in self.calificaciones:
            suma += c

        self.promedio = suma / len(self.calificaciones)

    def imprimir(self):
        print('\n--------------------------------------')
        print("Nombre: %s | Carrera: %s | Cuatri: %s" % (self.nombre, self.carrera, self.nivel))
        print("Calificaciones: %s" % self.calificaciones)
        print("Promedio: %.2f" % self.promedio)
