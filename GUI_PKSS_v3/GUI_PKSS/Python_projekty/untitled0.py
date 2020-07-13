# -*- coding: utf-8 -*-
"""
Created on Sat Dec  7 16:18:21 2019

@author: dorot
"""

from tkinter import *
import sys, os, csv, time

window= Tk()

window.title("PKSS")

ment=StringVar()

entry1 = Entry (window,textvariable=ment).pack()
txt = ment.get()
entry = Label(window, text=txt, fg="black",bg="orange", font="none 12")
entry.place(x=10,y=10)

window.mainloop()