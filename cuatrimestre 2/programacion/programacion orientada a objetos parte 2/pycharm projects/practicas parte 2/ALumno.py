from Persona import persona

class Alumno(persona):
    def __init__(self):
        self.matricula= None
        self.carrera= None
        self.nivel= None
        self.escuela=None
        self.calificaciones=[]

    def inscribirse(self,nivel):
        self.nivel=nivel
    def obtenerCalificaciones(self,unidad,calificacion):
        self.calificaciones.insert(unidad,calificacion)

    def printToscreen(self):
        print "Nivel: ", self.nivel
        print "Calificaciones: ", self.calificaciones