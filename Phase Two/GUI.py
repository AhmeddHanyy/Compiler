# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'compile.ui'
# Created by: PyQt5 UI code generator 5.15.10

import subprocess
from PyQt5 import QtCore, QtGui, QtWidgets
import sys
from PyQt5.QtWidgets import QApplication, QDialog, QLabel, QPushButton, QVBoxLayout
from PyQt5.QtGui import QIcon

class Ui_Dialog(object):
    def setupUi(self, Dialog):
        Dialog.setObjectName("Dialog")
        Dialog.resize(800, 620)
        Dialog.setStyleSheet("""
            QDialog {
                background-color: #2E2E2E;
                border-radius: 10px;
            }
            QLabel {
                font: bold 14px 'Segoe UI', sans-serif;
                color: #E1E1E1;
            }
            QTextEdit {
                font: 14px 'Courier New', monospace;  /* Fancy font for code */
                border: 2px solid #6E6E6E;
                border-radius: 8px;
                padding: 12px;
                background-color: #333333;
                color: #00FF00;  /* Green text to resemble code */
                line-height: 1.5;
                font-weight: bold;
              
            }
            QTextEdit:focus {
                background-color: #444444;  /* Slightly darker background when focused */
                border-color: #4CAF50;
            }
            QTextEdit::cursor {
                color: #FF6347;  /* Fancy cursor color */
            }
            QPushButton {
                font: bold 14px 'Segoe UI', sans-serif;
                padding: 12px 24px;
                background-color: #4CAF50;
                color: white;
                border-radius: 8px;
                border: none;
                
            }
            QPushButton:hover {
                background-color: #45a049;
            }
            QPushButton:pressed {
                background-color: #388E3C;
            }
            QPushButton:focus {
                outline: none;
            }
            QVBoxLayout {
                spacing: 20px;
            }
            QHBoxLayout {
                spacing: 20px;
            }
            QGridLayout {
                horizontalSpacing: 20px;
                verticalSpacing: 20px;
            }
            QDialog::title {
                background-color: #333333;
                color: #E1E1E1;
                font: bold 18px 'Segoe UI', sans-serif;
            }
        """)

        self.gridLayout_3 = QtWidgets.QGridLayout(Dialog)
        self.gridLayout_3.setObjectName("gridLayout_3")
        
        # Create title label
        self.title_label = QtWidgets.QLabel(Dialog)
        self.title_label.setObjectName("title_label")
        self.title_label.setText("Welcome to Our Compiler, Where You Will Hate Your Life")
        self.title_label.setAlignment(QtCore.Qt.AlignCenter)
        self.title_label.setStyleSheet("""
            font: 20px 'Segoe UI', sans-serif;
            color: #FF6347;
            padding: 20px;
            background-color: #2F4F4F;
            border-radius: 5px;
            border: 2px solid #FF6347;
        """)

        # Add the title label at the top of the dialog
        self.gridLayout_3.addWidget(self.title_label, 0, 0, 1, 1)

        # Set up main layout
        self.gridLayout = QtWidgets.QGridLayout()
        self.gridLayout.setObjectName("gridLayout")

        # Horizontal layout for Code and Result sections
        self.horizontalLayout_2 = QtWidgets.QHBoxLayout()
        self.horizontalLayout_2.setObjectName("horizontalLayout_2")

        # Code section
        self.verticalLayout_2 = QtWidgets.QVBoxLayout()
        self.verticalLayout_2.setObjectName("verticalLayout_2")
        self.label = QtWidgets.QLabel(Dialog)
        self.label.setObjectName("label")
        self.label.setText("Enter Code:")
        self.verticalLayout_2.addWidget(self.label)
        
        # Fancy "Enter Code" QTextEdit
        self.code_text = QtWidgets.QTextEdit(Dialog)
        self.code_text.setObjectName("code_text")
        self.verticalLayout_2.addWidget(self.code_text)

        # Result section
        self.verticalLayout_3 = QtWidgets.QVBoxLayout()
        self.verticalLayout_3.setObjectName("verticalLayout_3")
        self.label_2 = QtWidgets.QLabel(Dialog)
        self.label_2.setObjectName("label_2")
        self.label_2.setText("Compilation Result:")
        self.verticalLayout_3.addWidget(self.label_2)
        self.result_text = QtWidgets.QTextEdit(Dialog)
        self.result_text.setObjectName("result_text")
        self.verticalLayout_3.addWidget(self.result_text)

        self.horizontalLayout_2.addLayout(self.verticalLayout_2)
        self.horizontalLayout_2.addLayout(self.verticalLayout_3)

        self.gridLayout.addLayout(self.horizontalLayout_2, 0, 0, 1, 1)

        # Buttons layout
        self.gridLayout_2 = QtWidgets.QGridLayout()
        self.gridLayout_2.setObjectName("gridLayout_2")
        self.Compile_btn = QtWidgets.QPushButton(Dialog)
        self.Compile_btn.setObjectName("Compile_btn")
        self.Compile_btn.setText("Compile")
        self.gridLayout_2.addWidget(self.Compile_btn, 0, 0, 1, 1)
        self.close_btn = QtWidgets.QPushButton(Dialog)
        self.close_btn.setObjectName("close_btn")
        self.close_btn.setText("Close")
        self.gridLayout_2.addWidget(self.close_btn, 0, 1, 1, 1)

        self.gridLayout.addLayout(self.gridLayout_2, 1, 0, 1, 1)

        self.gridLayout_3.addLayout(self.gridLayout, 1, 0, 1, 1)

        self.retranslateUi(Dialog)
        QtCore.QMetaObject.connectSlotsByName(Dialog)

    def retranslateUi(self, Dialog):
        _translate = QtCore.QCoreApplication.translate
        Dialog.setWindowTitle(_translate("Dialog", "Code Compiler"))


class MyDialog(QDialog, Ui_Dialog):
    def __init__(self):
        super().__init__()
        self.setupUi(self)
        self.Compile_btn.clicked.connect(self.compile_button_clicked)
        self.close_btn.clicked.connect(self.close)

    def compile_button_clicked(self):
        # Define the action to be performed when Compile_btn is clicked
        try:
            # Extract text from the QTextEdit (code input)
            code = self.code_text.toPlainText()
            # Write the text to input.txt
            with open("input.txt", "w") as file:
                file.write(code)

            # Clear the output file
            with open("output.txt", "w") as file:
                pass  # This will clear the file

            # Run the compiler.exe command with input.txt as an argument
            subprocess.run([r"C:\Users\Marwan\Desktop\College\5_1\Compilers\Compiler\Phase Two\a.exe", "input.txt"])

            # Read the result from output.txt and display it in result_text QTextEdit
            with open("output.txt", "r") as file:
                result_text = file.read()
                self.result_text.setText(result_text)
        except FileNotFoundError:
            print("Error: a.exe or output.txt not found!")

if __name__ == "__main__":
    app = QtWidgets.QApplication(sys.argv)
    compileDialog = MyDialog()
    compileDialog.setWindowIcon(QIcon("icon.png"))  # Optional: add a custom icon
    compileDialog.show()
    sys.exit(app.exec_())
