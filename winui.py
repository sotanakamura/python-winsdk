from winsdk.microsoft.ui.xaml import Application, Window
from winsdk.microsoft.ui.xaml.controls import Button
from ctypes import cdll
import os

def init(params):
    app = Application()
    window = Window()
    window.activate()
    button = Button()
    # window.content = button

os.add_dll_directory(os.getcwd())
dll = cdll.LoadLibrary("MddBootstrap.dll")
dll.initialize()
Application.start(init)
dll.showdown()