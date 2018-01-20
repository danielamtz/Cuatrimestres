from Cuadrado import Cuadrado
from circulo import circulo
from Triangulo import triangulo
from rectangulo import rectangulo
from pentagono import pentagono

lilSquare=Cuadrado()
print("-----------CUADRADO--------")
lado= float(input("Cuanto vale el lado? "))
lilSquare.setLado(lado)
print("El lado vale: %.2f"%lilSquare.getLado())
print ("Area: %.2f"% lilSquare.Area())
print ("Perimetro: %.2f"%lilSquare.perimetro())

lilCircle= circulo()
print ("-------------CIRCLE-----------")
radio= float(input("Cuanto vale el radio? "))
lilCircle.radio=radio
print ("Area: %.2f"% lilCircle.Area())
print ("Perimetro: %.2f"%lilCircle.perimetro())

lilTriangle= triangulo()
print ("-------------TRIANGLE-----------")
base= float(input("Cuanto vale la base? "))
lilTriangle.base=base
altura= float(input("Cuanto vale la altura? "))
lilTriangle.altura=altura
perimeter= raw_input("Cual tringulo es? isoceles, escaleno o equilatero?")
lilTriangle.perimetro(perimeter)
lado= float(input("Cuanto vale el lado A? "))
lilTriangle.lado=lado
lado2= float(input("Cuanto vale el lado B? "))
lilTriangle.lado2=lado2
lado3= float(input("Cuanto vale el lado C? "))
lilTriangle.lado3=lado3
print ("Area: %.2f"% lilTriangle.Area())
print ("Perimetro: %.2f"%lilTriangle.perimetro(perimeter))

lilrect= rectangulo()
print ("-------------RECTANGULO-----------")
base= float(input("Cuanto vale la base? "))
lilrect.base=base
altura= float(input("Cuanto vale la altura? "))
lilrect.altura=altura
print ("Area: %.2f"% lilrect.Area())
print ("Perimetro: %.2f"%lilrect.perimetro())

lilpen= pentagono()
print ("-------------PENTAGONO-----------")
lado= float(input("Cuanto mide el lado?"))
lilpen.l=lado
apotema= float(input("Cuanto mide apotema?"))
lilpen.ap=apotema
print ("Area: %.2f"% lilpen.Area())
print ("Perimetro: %.2f"%lilpen.perimetro())