from ALumno import Alumno
from Profesor import Profesor
from Trabajador import Trabajador
myAlumno= Alumno()
myProfesor=Profesor()
myTrabajador=Trabajador()

myAlumno.nombre=raw_input("Nombre del alumno: ")
myAlumno.edad=input("edad Alumno: ")
myAlumno.curp=raw_input("Ingresa CURP alumno:")
nivel=raw_input("Nivel: ")
myAlumno.inscribirse(nivel)
unidades = int(input('Cuantas unidades: '))
for i in range(unidades):
    calificacion = float(input('Calificacion %d: ' % (i + 1)))
    myAlumno.obtenerCalificaciones(i, calificacion)
myAlumno.Screen()
myProfesor.nombre=raw_input("Nombre del Profesor: ")
myProfesor.edad=input("Edad profesor: ")
myProfesor.curp=raw_input("Ingresa CURP Profesor:")
cantidad=("Ingresa sueldo ganado por hora")

myTrabajador.nombre=raw_input("Nombre del Trabajador: ")
myTrabajador.edad=input("Edad Trabajador: ")
myTrabajador.curp=raw_input("Ingresa CURP Trabajador:")
