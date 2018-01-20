class producto:
    def __init__(self,fabricante,codigo,compra,venta,cantidad):
        self.fabricante= fabricante
        self.codigo=codigo
        self.precioDeCompra=compra
        self.precioDeVenta=venta
        self.cantidad=cantidad
        self.inventario=0
        self.diferencia=0.0
        self.porcentaje=0.0
        self.final=0.00

    def calcularGanancia(self):
        self.porcentaje=self.precioDeVenta-self.precioDeCompra
        self.diferencia=self.porcentaje/self.precioDeCompra
        self.final=self.diferencia*100



    def comprarProducto(self,adquirido):
        self.inventario=self.cantidad+adquirido



    def printToScreen(self):
        print "\n---------------"
        print "Fabricante:", self.fabricante,"| Codigo del producto:",self.codigo
        print "Precio de compra: ",self.precioDeCompra
        print "Existencia actual del producto: ",self.inventario
        print "Ganancia : " ,self.final