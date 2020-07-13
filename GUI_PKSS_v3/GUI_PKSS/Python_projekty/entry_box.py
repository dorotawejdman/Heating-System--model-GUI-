# -*- coding: utf-8 -*-
"""
Created on Sat Dec  7 16:18:21 2019

@author: dorot
"""

from tkinter import *
import sys, os, csv, time

#Um
#P_Um=0.1
#I_Um=0.005
#D_Um=0.05
#
##Ub1
#P_Ub1=0.1
#I_Ub1=0.005
#D_Ub1=0.05
#
##Ub2
#P_Ub2=0.1
#I_Ub2=0.005
#D_Ub2=0.05
nastawy=[[0.1,0.005,0.05], [0.1,0.005,0.05], [0.1,0.005,0.05]]

def writePID(P,I,D,d):
    f = open("PID.txt", "w")
    f.truncate()
    nastawy[d]=[P,I,D]
    os.chdir('E:\Air\PKSS\GUI_PKSS\Python_projekty')
    with open("E:\Air\PKSS\GUI_PKSS\Python_projekty\PID.txt", 'a', encoding='utf-8', newline='') as csvfile:
            csvwriter=csv.writer(csvfile,delimiter=";")
            csvwriter.writerow([str(nastawy)])
#    f.write(P_Um+"\n"+I_Um+"\n"+D_Um+"\n")
#    f.write(P_Ub1+"\n"+I_Ub1+"\n"+D_Ub1+"\n")
#    f.write(P_Ub2+"\n"+I_Ub2+"\n"+D_Ub2+"\n")
    f.close()


def pidum_ok():
    P_Um = Pent1.get()
    I_Um = Ient1.get()
    D_Um = Dent1.get()
    P1label = Label(window, text=P_Um,font="none 12")
    P1label.place( x =1344, y = 125)
    P2label = Label(window, text=I_Um,font="none 12")
    P2label.place( x =1344, y = 135)
    P3label = Label(window, text=D_Um,font="none 12")
    P3label.place( x =1344, y = 145)
    writePID(P_Um,I_Um,D_Um,0)
    
def pidub1_ok():
    P_Ub1 = Pent2.get()
    I_Ub1 = Ient2.get()
    D_Ub1 = Dent2.get()
    P1label = Label(window, text=P_Ub1,font="none 12")
    P1label.place( x =1344, y = 125)
    P2label = Label(window, text=I_Ub1,font="none 12")
    P2label.place( x =1344, y = 135)
    P3label = Label(window, text=D_Ub1,font="none 12")
    P3label.place( x =1344, y = 145)
    writePID(P_Ub1,I_Ub1,D_Ub1,1)
    
def pidub2_ok():
    P_Ub2 = Pent3.get()
    I_Ub2 = Ient3.get()
    D_Ub2 = Dent3.get()
    P1label = Label(window, text=P_Ub2,font="none 12")
    P1label.place( x =1344, y = 125)
    P2label = Label(window, text=I_Ub2,font="none 12")
    P2label.place( x =1344, y = 135)
    P3label = Label(window, text=D_Ub2,font="none 12")
    P3label.place( x =1344, y = 145)
    writePID(P_Ub2,I_Ub2,D_Ub2,2)
    
window= Tk()
window.title("PKSS")

Pent1=StringVar()
Ient1=StringVar()
Dent1=StringVar()

Pent2=StringVar()
Ient2=StringVar()
Dent2=StringVar()

Pent3=StringVar()
Ient3=StringVar()
Dent3=StringVar()

button1=Button(window,text='OK',command=pidum_ok).pack()

button2=Button(window,text='OK',command=pidub1_ok).pack()

button3=Button(window,text='OK',command=pidub2_ok).pack()



P1 = Entry (window,textvariable=Pent1).pack()

I1 = Entry (window,textvariable=Ient1).pack()

D1 = Entry (window,textvariable=Dent1).pack()


P2 = Entry (window,textvariable=Pent2).pack()

I2 = Entry (window,textvariable=Ient2).pack()

D2 = Entry (window,textvariable=Dent2).pack()


P3 = Entry (window,textvariable=Pent3).pack()

I3 = Entry (window,textvariable=Ient3).pack()

D3 = Entry (window,textvariable=Dent3).pack()

window.mainloop()
#entry = Label(window, text=txt, fg="black",bg="orange", font="none 12")
#entry.place(x=10,y=10)




#    with open('test.csv', 'a', encoding='utf-8', newline='') as csvfile:
#        csvwriter=csv.writer(csvfile,delimiter=";")
#        csvwriter.writerow([txt])
    #txtLabel=Label(window,text=txt).pack()
    