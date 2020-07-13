# -*- coding: utf-8 -*-
"""
Created on Sat Dec  7 19:31:12 2019

@author: dorot
"""

from tkinter import *
import sys, os, csv, time

def pidum_ok():
    P_Um = Pent1.get()
    I_Um = Ient1.get()
    D_Um = Dent1.get()
    P1label = Label(window, text=P_Um, fg="black",bg="orange", font="none 12").pack()
    print(str(Pent1))
    print(str(P_Um))
    
    
window= Tk()
window.title("PKSS")

Pent1=StringVar()
Ient1=StringVar()
Dent1=StringVar()

button1=Button(window,text='OK',command=pidum_ok).pack()

P1 = Entry (window,textvariable=Pent1).pack()

I1 = Entry (window,textvariable=Ient1).pack()

D1 = Entry (window,textvariable=Dent1).pack()

window.mainloop()