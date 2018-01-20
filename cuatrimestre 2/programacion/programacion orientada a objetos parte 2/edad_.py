class edad (object):
	def __init__(self):
		import datetime
		self.fechaActual = datetime.datetime.now()
		self.diaActual= self.fechaActual.day
		self.mesActual= self.fechaActual.month
		self.anioActual= self.fechaActual.year

	def actual (self):
		print(self.fechaActual.month)	
		
	def birth (self,dia,mes,anio):
		self.diaNacimiento = self.diaActual-dia
		if self.diaNacimiento>1:
			self.mesActual=self.mesActual-1

		self.mesNacimiento= self.mesActual-mes
		if self.mesNacimiento<0:
			self.anioActual= self.anioActual-1

		self.edadNacimiento= self.anioActual-anio
		print(self.edadNacimiento) 