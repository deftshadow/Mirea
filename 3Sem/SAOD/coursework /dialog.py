# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file '.\dialog.ui'
#
# Created by: PyQt5 UI code generator 5.13.0
#
# WARNING! All changes made in this file will be lost!


from PyQt5 import QtCore, QtGui, QtWidgets
from PyQt5.QtWidgets import QTableWidgetItem
from PyQt5.QtGui import QColor, QFont


class DialogUI(object):
    def setupUi(self, Dialog):
        Dialog.setObjectName("Dialog")
        Dialog.setFixedSize(328, 351)
        self.text = QtWidgets.QTextEdit(self)
        self.text.setMaximumSize(100, 30)
        self.tableWidget = QtWidgets.QTableWidget(Dialog)
        self.count_label = QtWidgets.QLabel(self)
        self.count_label.move(216, 80)
        self.count_label.setFixedSize(100, 30)
        self.count_label.setFont(QFont('Times New Roman', 11))
        self.tableWidget.setGeometry(QtCore.QRect(0, 0, 211, 351))
        self.tableWidget.setObjectName("tableWidget")
        self.tableWidget.setColumnCount(0)
        self.tableWidget.setRowCount(0)
        self.tableWidget.setSortingEnabled(True)
        search_button = QtWidgets.QPushButton('Поиск', self)
        search_button.setMinimumSize(80, 30)
        search_button.move(216, 20)
        search_button.clicked.connect(self.search_clicked)
        self.text.move(216, 50)
        self.retranslateUi(Dialog)
        QtCore.QMetaObject.connectSlotsByName(Dialog)

    def search_clicked(self):
        count = 0
        for i in range(0, self.tableWidget.rowCount()):
            self.tableWidget.item(i, 0).setBackground(QColor(255, 255, 255))
            self.tableWidget.item(i, 1).setBackground(QColor(255, 255, 255))
        for i in range(0, self.tableWidget.rowCount()):
            if self.text.toPlainText() == self.tableWidget.item(i, 0).text():
                self.tableWidget.item(i, 0).setBackground(QColor(255, 17, 0))
                self.tableWidget.item(i, 1).setBackground(QColor(255, 17, 0))
                count+=1
        self.tableWidget.repaint()
        if count == 0:
            self.count_label.setText("Значений не найдено")
            self.count_label.repaint()
        else:
            self.count_label.setText('Найдено значений: ' + str(count))
            self.count_label.repaint()

    def retranslateUi(self, Dialog):
        _translate = QtCore.QCoreApplication.translate
        Dialog.setWindowTitle(_translate("Dialog", "Dialog"))
