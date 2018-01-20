class alumno:
    def __init__(self,nombre,carrera,nivel):
        self.nombre= nombre
        self.carrera= carrera
        self.nivel=nivel
        self.unidad=" "
        self.calificacion= 0.0
        self.promedio=0
        self.suma=0
        self.sumaUnidades=0
        self.l=0

    def capturaDeCalificaciones(self,unidad,nota):
        self.unidad=unidad
        lista = [nota]
        for x in lista:
            self.l += 1

        self.calificacion=nota
        self.suma +=self.calificacion
        self.sumaUnidades += 1
        self.promedio = self.suma / self.sumaUnidades


    def calculo(self):
        print "Nombre del alumno: ",self.nombre
        print "Carrera: ", self.carrera
        print "Cuatrimestre: ", self.nivel
        print "Calificaciones obtenidas: ", self.l
        print "Promedio final: ",self.promedio



