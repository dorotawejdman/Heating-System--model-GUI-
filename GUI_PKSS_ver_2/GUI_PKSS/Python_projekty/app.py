from tkinter import *
import sys, os, csv, time
#Um
P_Um=0.1
I_Um=0.005
D_Um=0.05

#Ub1
P_Ub1=0.1
I_Ub1=0.005
D_Ub1=0.05

#Ub2
P_Ub2=0.1
I_Ub2=0.005
D_Ub2=0.05

#Accepting of PID values
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
    P2label.place( x =1344, y = 155)
    P3label = Label(window, text=D_Um,font="none 12")
    P3label.place( x =1344, y = 185)
    writePID(P_Um,I_Um,D_Um,0)
    
def pidub1_ok():
    P_Ub1 = Pent2.get()
    I_Ub1 = Ient2.get()
    D_Ub1 = Dent2.get()
    P1label = Label(window, text=P_Ub1,font="none 12")
    P1label.place( x =1344, y = 285)
    P2label = Label(window, text=I_Ub1,font="none 12")
    P2label.place( x =1344, y = 315)
    P3label = Label(window, text=D_Ub1,font="none 12")
    P3label.place( x =1344, y = 345)
    writePID(P_Ub1,I_Ub1,D_Ub1,1)
    
def pidub2_ok():
    P_Ub2 = Pent3.get()
    I_Ub2 = Ient3.get()
    D_Ub2 = Dent3.get()
    P1label = Label(window, text=P_Ub2,font="none 12")
    P1label.place( x =1344, y = 435)
    P2label = Label(window, text=I_Ub2,font="none 12")
    P2label.place( x =1344, y = 465)
    P3label = Label(window, text=D_Ub2,font="none 12")
    P3label.place( x =1344, y = 495)
    writePID(P_Ub2,I_Ub2,D_Ub2,2)

def Tr_ok():
    Tr1 = Trent1.get()
    Tr2 = Trent2.get()
    
def uruchom_program():
    os.startfile('"E:\Air\PKSS\GUI_PKSS\Python_projekty\pkss_projekt.exe"')

time.sleep(2) #Do testow 2

#window
window= Tk()

#entry values

Pent1=StringVar()
Ient1=StringVar()
Dent1=StringVar()

Pent2=StringVar()
Ient2=StringVar()
Dent2=StringVar()

Pent3=StringVar()
Ient3=StringVar()
Dent3=StringVar()
Trent1=StringVar()
Trent2=StringVar()

window.title("PKSS")

# PKSS photo
photo= PhotoImage(file="PKSS.png")
labelPhoto=Label (window, image=photo, bg="black").grid(row=0, column=0, sticky=E)



button1=Button(window,text='OK',command=pidum_ok)
button1.place( x =1280, y = 140)
button2=Button(window,text='OK',command=pidub1_ok)
button2.place( x =1280, y = 320)
button3=Button(window,text='OK',command=pidub2_ok)
button3.place( x =1280, y = 470)

button4=Button(window,text='OK',command=Tr_ok)
button4.place( x =1355, y = 630)

button5=Button(window,text='Uruchom',command=uruchom_program)
button5.place( x =55, y = 655)

with open('Wyniki.csv', mode='r') as csv_file:
    csv_reader = csv.reader(csv_file,delimiter=';')
    line_count = 0
    # T0;Tr;Tpco;Tpm;Tzco;Tzco_ref;Tzm;Fcob_i;rtb_Fcob;TrSP;Um;Ub1;Ub2
    T0=[]
    for row in csv_reader:
        if line_count == 0:
            print(f'Column names are {",".join(row)}')
            line_count += 1
        else:
            T0.append(float(row[0]))

            #?MPEC?
            #Tzco
            Tzco = Label(window, text=str(row[4])[0:4]+" [°C]", fg="black",bg="orange", font="none 12")
            Tzco.place(x=116,y=63)
            #Tzcoref
            Tzcoref = Label(window, text=str(row[5])[0:4]+" [°C]", fg="black",bg="orange", font="none 12")
            Tzcoref.place(x=206,y=63)
            #Fzm
            fzm = str("{0:.2f}".format(float(row[10][0:6]) * 80))
            Fzm = Label(window, text=str(fzm)+" [t/h]", fg="black",bg="green", font="none 12")
            Fzm.place(x=296,y=63)
            #Tzm
            Tzm = Label(window, text=str(row[6])[0:4]+" [°C]", fg="black",bg="orange", font="none 12")
            Tzm.place(x=396,y=63)
            #Tpm
            Tpm = Label(window, text=str(row[3])[0:4]+" [°C]", fg="black",bg="orange", font="none 12")
            Tpm.place(x=308,y=270)


            #Budynek 1
            #Tr
            Tr1 = Label(window, text=str(row[1])[0:4]+" [°C]", fg="black",bg="orange", font="none 12")
            Tr1.place(x=680,y=63)
            #TrSP
            TrSP1 = Label(window, text=str(row[9])[0:4]+" [°C]", fg="black",bg="orange", font="none 12")
            TrSP1.place(x=770,y=63)
            #Tpco
            Tpco1 = Label(window, text=str(row[2])[0:4]+" [°C]", fg="black",bg="orange", font="none 12")
            Tpco1.place(x=860,y=63)
            #Fco1
            fco1 = str("{0:.2f}".format(float(row[11][0:6]) * 40))
            Fco1 = Label(window, text=str(fzm)+" [t/h]", fg="black",bg="green", font="none 12")
            Fco1.place(x=950,y=63)


            #Budynek 2
            #Tr
            Tr1 = Label(window, text=str(row[1])[0:4]+" [°C]", fg="black",bg="orange", font="none 12")
            Tr1.place(x=687,y=450)
            #TrSP
            TrSP1 = Label(window, text=str(row[9])[0:4]+" [°C]", fg="black",bg="orange", font="none 12")
            TrSP1.place(x=777,y=450)
            #Tpco
            Tpco1 = Label(window, text=str(row[2])[0:4]+" [°C]", fg="black",bg="orange", font="none 12")
            Tpco1.place(x=867,y=450)
            #Fco1
            fco1 = str("{0:.2f}".format(float(row[11][0:6]) * 40))
            Fco1 = Label(window, text=str(fzm)+" [t/h]", fg="black",bg="green", font="none 12")
            Fco1.place(x=957,y=450)

            #Regulatory[%]
            #Um
            um=str("{0:.2f}".format(float(row[10][0:6])*100))
            Um = Label(window, text=um+" [%]", fg="black",bg="grey", font="none 12")
            Um.place(x=56, y=170)
            #Ub1
            um=str("{0:.2f}".format(float(row[11][0:6])*100))
            Um = Label(window, text=um+" [%]", fg="black",bg="grey", font="none 12")
            Um.place(x=462, y=170)
            #Ub2
            um=str("{0:.2f}".format(float(row[12][0:6])*100))
            Um = Label(window, text=um+" [%]", fg="black",bg="grey", font="none 12")
            Um.place(x=462, y=550)
            
            #Nastawy PID - entryBox
            P1 = Entry (window,textvariable=Pent1,width=10)
            P1.place( x =1184, y = 125)
            I1 = Entry (window,textvariable=Ient1,width=10)
            I1.place( x =1184, y = 155)
            D1 = Entry (window,textvariable=Dent1,width=10)
            D1.place( x =1184, y = 185)
            
            P2 = Entry (window,textvariable=Pent2,width=10)
            P2.place( x =1184, y = 285)
            I2 = Entry (window,textvariable=Ient2,width=10)
            I2.place( x =1184, y = 315)
            D2 = Entry (window,textvariable=Dent2,width=10)
            D2.place( x =1184, y = 345)
            
            P3 = Entry (window,textvariable=Pent3,width=10)
            P3.place( x =1184, y = 435)
            I3 = Entry (window,textvariable=Ient3,width=10)
            I3.place( x =1184, y = 465)
            D3 = Entry (window,textvariable=Dent3,width=10)
            D3.place( x =1184, y = 495)
#            
            Tr1_entry = Entry (window,textvariable=Trent1,width=10)
            Tr1_entry.place( x =1255, y = 611)
            Tr2_entry = Entry (window,textvariable=Trent2,width=10)
            Tr2_entry.place( x =1255, y = 661)
            
            line_count += 1
            window.update()
            time.sleep(0.1)
            
           
            
    print(f'Processed {line_count} lines.')

window.mainloop()