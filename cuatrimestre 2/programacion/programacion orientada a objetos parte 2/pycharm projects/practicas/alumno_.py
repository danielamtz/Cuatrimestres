class alumno:
    def __init__(self,nombre,carrera,nivel):
        self.nombre= nombre
        self.carrera= carrera
        self.nivel=nivel
        self.unidad=" "
        self.calificacion= 0.0
        self.promedio=0.0

    def capturaDeCalificiones(self,unidad,nota):
        self.unidad=unidad
        self.calificacion=nota


    def calculo(self,promedio):
        self.promedio=promedio
