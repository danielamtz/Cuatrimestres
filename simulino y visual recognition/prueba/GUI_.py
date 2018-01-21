import json
import pprint
from os.path import join, dirname
from os import environ
from watson_developer_cloud import VisualRecognitionV3
import sys
from PyQt4 import QtCore, QtGui, uic
form_class = uic.loadUiType("j.ui")[0]
instance = VisualRecognitionV3(version='2016-05-20', api_key='1e1f302ac4fdd1cf3980458a3e9093b6b495f483')

#with open(join(dirname(__file__), 'manzanas.zip'), 'rb') as manzana, \
  # open(join(dirname(__file__), 'naranjas.zip'), 'rb') as naranja:
#    print(json.dumps(instance.create_classifier('ManzanavsNaranja', manzana_positive_examples=manzana, negative_examples=naranja), indent=2))
class MyWindowClass(QtGui.QMainWindow, form_class):
    def __init__(self, parent=None):
        QtGui.QMainWindow.__init__(self, parent)
        self.setupUi(self)

        json.dumps(instance.get_classifier('ManzanasvsNaranjas_1506610010'),indent=2)
        with open(join(dirname(__file__), 'ds.jpg'), 'rb') as image_file:
            cel=instance.classify(images_file=image_file, threshold=0.1, classifier_ids=['ManzanasvsNaranjas_1506610010'])
            cel2=(cel['images'][0]['classifiers'][0]['classes'])
            if(cel2== 'classes'):
                self.lineEdit.setText(str(cel2))





#print(json.dumps(instance.list_classifiers(), indent=2))

app = QtGui.QApplication(sys.argv)
MyWindow = MyWindowClass(None)
MyWindow.show()
app.exec_()
