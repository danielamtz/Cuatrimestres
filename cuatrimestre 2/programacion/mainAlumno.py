from alumno import Student

name= input('Nombre del Alumno: ')
carrera = input('Carrera del Alumno: ')
nivel = int(input('Nivel: '))
alumnito = Alumno(nombre, carrera, nivel)

unidades = int(input('Cuantas unidades: '))
for i in range(unidades):
    calificacion = float(input('Calificacion %d: ' % (i + 1)))
    alumnito.capturar_calificaciones(i, calificacion)

alumnito.calcular_promedio()
alumnito.imprimir()
