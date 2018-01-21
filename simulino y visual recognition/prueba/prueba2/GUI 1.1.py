import json
import pprint
from os.path import join, dirname
from os import environ
from watson_developer_cloud import VisualRecognitionV3
import sys
from PyQt4 import QtCore, QtGui, uic
from PyQt4.QtCore import *
from PyQt4.QtGui import *
form_class = uic.loadUiType("GUI.ui")[0]
instance = VisualRecognitionV3(version='2016-05-20', api_key='1e1f302ac4fdd1cf3980458a3e9093b6b495f483')

#with open(join(dirname(__file__), 'manzanas.zip'), 'rb') as manzana, \
  # open(join(dirname(__file__), 'naranjas.zip'), 'rb') as naranja:
#    print(json.dumps(instance.create_classifier('ManzanavsNaranja', manzana_positive_examples=manzana, negative_examples=naranja), indent=2))
class MyWindowClass(QtGui.QMainWindow, form_class):
    def __init__(self, parent=None):
        QtGui.QMainWindow.__init__(self, parent)
        self.setupUi(self)
        self.btnSalir.clicked.connect(self.btnSalir_clicked)
        self.btnBorrar.clicked.connect(self.btnBorrar_clicked)

        json.dumps(instance.get_classifier('ManzanasvsNaranjas_1506610010'),indent=2)
        with open(join(dirname(__file__), 'ds.jpg'), 'rb') as image_file:
            cel=instance.classify(images_file=image_file, threshold=0.1, classifier_ids=['ManzanasvsNaranjas_1506610010'])
            #cel2=(cel['images'][0]['classifiers'][0]['classes'])

            #t= (str(cel2))


            for results in cel['images'][0]['classifiers'][0]['classes']:
                print('\n There is a ' + str(round((results['score'] * 100), 1)) + ' percent chance the image contains: ' + results['class'])
                self.plaintxt.appendPlainText('\n Hay un '+str(round((results['score'] * 100), 1))+'%' +' de probabilidad de que la imagen contenga : ' + results['class'])

            #paths = [line.strip().split(' ') for line in cel]

    def btnSalir_clicked(self):
        exit()

    def btnBorrar_clicked(self):
        self.plaintxt.clear()



#print(json.dumps(instance.list_classifiers(), indent=2))

app = QtGui.QApplication(sys.argv)
MyWindow = MyWindowClass(None)
MyWindow.show()
app.exec_()
