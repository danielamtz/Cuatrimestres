from alumno import alumno
num= input("Cuantos Alumnos va a capturar? ")
for x in xrange (num):
    nombre= raw_input("Ingresa el nombre del alumno: ")
    carrera= raw_input("Ingresa la carrera del alumno: ")
    nivel= raw_input("Ingresa el nivel del alumno: ")
    myAlumno=alumno(nombre,carrera,nivel)
    i=0
    contador=0
    respuesta='S'
    while(respuesta=='S'):
        unidad= raw_input("Unidad a la que se asignara la calificacion:")
        nota= input("calificacion de la unidad: ")
        myAlumno.capturaDeCalificaciones(unidad,nota)
        respuesta=raw_input("Desea ingresar otra calificacion de unidad? S/N: ")

    myAlumno.calculo()

