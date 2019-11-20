from qt import MainWindowUI
from dialog import DialogUI as DIALOG
from PyQt5.QtWidgets import QMainWindow, QTableWidget, QTableWidgetItem, QApplication, \
    QMessageBox, QDialog
import re
import os


class MainWindow(QMainWindow):
    def __init__(self, parent=None):
        super(MainWindow, self).__init__(parent)
        self.ui = MainWindowUI()
        self.ui.setupUi(self)
        self.p = re.compile("([a-zA-Z-'а-яА-Я]+)")
        self.ui.pushButton_func.clicked.connect(self.freq_alph)
        self.ui.saveButton.clicked.connect(self.save_to_file)
        self.d = DialogUIWidget()
        self.result = list()

    def freq_alph(self):
        input_text = self.ui.textEdit.toPlainText()
        res = self.p.findall(input_text)
        lsWord = {}
        for key in res:
            if key in lsWord:
                value = lsWord[key]
                lsWord[key] = value + 1
            else:
                lsWord[key] = 1
        sorted_keys = sorted(lsWord, key=lambda x: int(lsWord[x]), reverse=True)
        for key in sorted_keys:
            self.result.append([key, lsWord[key]])
        self.d.show()
        self.d.func(self.result)

    def save_to_file(self):
        if len(self.result) != 0:
            name_file = self.ui.lineEdit.text()
            with open(str(name_file) + ".txt", 'a+') as file:
                for elems in self.result:
                    s = str("{0} : {1}\n").format(elems[0], elems[1])
                    file.write(s)
            QMessageBox.about(self, "Success", "The file was created successfully\
			and the results are recorded.")
        else:
            self.freq_alph()
            self.save_to_file()


class DialogUIWidget(QDialog, DIALOG):
    def __init__(self):
        QDialog.__init__(self)
        self.setupUi(self)

    def func(self, result):
        rows = len(result)
        self.tableWidget.setColumnCount(2)
        self.tableWidget.setRowCount(rows)
        self.tableWidget.setHorizontalHeaderLabels(
            ['Words', 'Counts'])
        for i in range(len(result)):
            for j in range(len(result[i])):
                self.tableWidget.setItem(i, j, QTableWidgetItem(str(result[i][j])))


if __name__ == '__main__':
    app = QApplication([])
    win = MainWindow()
    win.show()
    app.exec()
