import random
import string
class cadena:
	def __init__(self):
		self.word= []

	def createWord(self,num):
		for x in xrange(num):
			self.word+= random.choice(string.ascii_lowercase+string.digits)

		
		pass

	def printWord(self):
		print self.word
