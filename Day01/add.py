from PyQt5.QtWidgets import QMainWindow, QApplication
from PyQt5 import uic
import sys

class MY_UI(QMainWindow): 
    def __init__(self):
        super().__init__()
        uic.loadUi("login.ui", self)
        self.show()

if __name__ == "__main__":
    app = QApplication(sys.argv)
    my_ui = MY_UI()
    app.exec_()
