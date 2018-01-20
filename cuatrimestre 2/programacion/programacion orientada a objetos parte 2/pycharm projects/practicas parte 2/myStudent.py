from student import student
num= input("Cuantos Alumnos va a capturar? ")
for x in xrange (num):
    nombre= raw_input("Ingresa el nombre del alumno: ")
    carrera= raw_input("Ingresa la carrera del alumno: ")
    nivel= raw_input("Ingresa el nivel del alumno: ")
    myStudent=student(nombre,carrera,nivel)

    unidad = int(input('Cuantas unidades: '))
    for i in range(unidad):
        nota = float(input('Calificacion %d: ' % (i + 1)))
        myStudent.capturaDeCalificaciones(i, nota)

    myStudent.calcular_promedio()
    myStudent.calculo()

