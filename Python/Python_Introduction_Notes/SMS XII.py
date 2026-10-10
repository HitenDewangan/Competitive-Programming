import random


#==================== Welcome =====================================================================
a="********************************************"
b="-----------------------------------------"
c="____________________________________________"

d="▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒"

e="░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░"
f="■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■"
g="____________________________________________________________"
h="************************************************************"
i="________________________________________________________________"

#================================ F U N C T I O N S ================================

def sc():
    print(" ")
    
#========= Login Form =========#

def login():
    print(f)
    print("φ========= LOGIN TO THE SYSTEM =========φ")
    print(f)
    sc()
    in1=input("Enter your name: ")
    in2=input("Enter your E-mail ID: ")
    in3=int(input("Enter your Phone No.: "))
    in4=input("Enter Address: ")
    if in2 == "":
        sc()
        print("Error :: Please enter your Email-Id !!!!!")
        in2=input("Enter your E-mail ID: ")
        sc()
    elif in4 == "":
        sc()
        print("Error :: Please enter your Address !!!!!")
        in4=input("Enter your Address: ")
        sc()
    else:
        in1s = in1.split(" ")[0]
        sc()
        print("♀ Welcome", in1s," ♀")
        sc()
        
#======================= STUDENT INFO ==========================

def stdpro():
    Stds=["""Class:           | XII Science
Roll No.:        | 1212 B
Admission No.:   | 786
Email-Id:        | XYZ@gmail.com
Address:         | Kotra Road, Raigarh (C.G.)"""

,"""Class:           | XII Science
Roll No.:        | 1257 A
Admission No.:   | 879
Email-Id:        | XYZ@gmail.com
Address:         | Lotus Palace, Raigarh (C.G.)"""

,"""Class:           | XII Science
Roll No.:        | 1227 B
Admission No.:   | 2874
Email-Id:        | XYZ@gmail.com
Address:         | Kabir Chowk, Raigarh (C.G.)"""]
     
    
    print("Student Name:    |",in6)
    b2=in6.split(" ")[1]
    b3=in6.partition(" ")
    b4=len(b3)
    if b4==3:
        b5=in6.split(" ")[-1]
    elif b4==4:
        b5=in6.split(" ")[3]
    else:
        pass
    print("Mother's Name:   | Sita",b2)
    print("Father's Name:   | Ram",b2)
    print(Stds[random.randint(0,2)])
    


    
#===================== FEES DETAILS =======================

rdi=random.randrange(6569,11000)
rdi2=random.randrange(6569,8549)
    
def FD():
    print(a)
    print(" ------------ FEES DETAILS -------------")
    print(c)
    print("Ist Installment   | Rs.",rdi,"  | PAID      |")
    print("IInd Installment  | Rs.",rdi,"  | PAID      |")
    print("IIIrd Installment | Rs.",rdi,"  | Remaining |")
    print("IVth Installment  | Rs.",rdi,"  | Remaining |")
    print(c)
    print("Bus Fees(Yearly)  | Rs.",rdi2,"  | PAID      |")
    print(c)
    sc()

#================== TEST RECORD =========================

def toper():
    ttl= (PTI3*2) + PTI4 + PTI5 + PTI6 + PTI7
    perc = (ttl/150)*100
    print("Total Marks Obtained:",ttl,"/150" ,"        Percentage:",round(perc, 1),"%")
    
def HYtoper():
    ttl2= (HYE3*2) + HYE4 + HYE5 + HYE6 + HYE7
    perc2 = (ttl2/480)*100
    print("Total Marks Obtained:",ttl2,"/480" ,"        Percentage:",round(perc2, 1),"%")
    

def Ptoper():
    ttl3= (PTII_3*2) + PTII_4 + PTII_5 + PTII_6 + PTII_7
    perc3 = (ttl3/240)*100
    print("Total Marks Obtained:",ttl3,"/240" ,"        Percentage:",round(perc3, 1),"%")
 
#==================== Thank You Comment ==================
def NS():
    h=1
    k=21
    for i in range(h):
        for j in range(k):
            print("⌂", end="")
        print()
                
    print("⌂  ☺☻ Thank You ☻☺  ⌂")
            
    for i in range(h):
        for j in range(k):
            print("⌂", end="")
                
        print()
    print("")

#=============== TEACHERS INFO ==================

def tch():
    print(h)
    print(" ---------------- TEACHERS INFORMATION ---------------")
    print(g)
    print(i)  

#============== Feedback ===============
n=5
def Thank():
    for i in range(n-1):
        for j in range(i, n):
            print(' ', end=' ')
        for j in range(i):
            print('▓', end='░')   
        for j in range(i+1):
            print('▓', end='░')  
        print()

    print(" ▓░☺☻ Thank You ☻☺ ▓░")
    
    for i in range(n):
        for j in range(i + 1):
            print(' ', end=' ')
        for j in range(i, n-1):
            print('▓', end='░') 
        for j in range(i,n):
            print('▓', end='░')  
        print()

#==================================== M A I N   C O D E ===============================================
print(f)
print(c)
print("φ WELCOME TO STUDENT MANAGEMENT SYSTEM φ")
print(c)
print(f)
print(a)
sc()


   
#-------- Login ---------
login()


#==================== Student Info ==========================#

in4=input("Do you want to see Student Profile?: ")
print(c)
print(e)
sc()
if in4=='yes' or in4=='Yes' or in4=='YES':
    print(f)
    print("φ=========== STUDENT DETAILS ===========φ")
    print(f)
    sc()
    in5=int(input("Enter Admission No.: "))
    in6=input("Enter Student's full Name: ")
    print(c)
    print(d)
    sc()


student="""Student Name:   | Hitendra Kumar Dewangan
Mother's Name:  | Shakun Dewangan
Father's Name:  | Rohit Kumar Dewangan
Class:          | XI Science
Roll No.:       | 1122 B
Admission No.:  | 2571
Email-Id:       | shakundewangan74@gmail.com
Address:        | Beladula Kharraghat Front of Chuna Bhatti, Raigarh (C.G.)"""

if in6 == "Hitendra Dewangan" or in6 == "Hitendra" or in6 == "Hitendra Kumar Dewangan":
    print(student)
else:
    print(stdpro())

print("*********************************************************************")
print("░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░")
    

#=================== A T T E N D A N C E   C O D E ===========================

rdi4=[]
for i in range(21):    
    rdi3=random.randint(20,27)
    rdi4.append(rdi3)
    
ra1=(rdi4[5])
ra2=(rdi4[9])
ra3=(rdi4[18])
ra4=(rdi4[20])

rdi6=[]
for i in range(10):    
    rdi7=random.randint(1,6)
    rdi6.append(rdi7)
    
rb1=rdi6[5]
rb2=rdi6[4]
rb3=rdi6[3]
rb4=rdi6[2]

rdi9=ra1-rb1
rdi91=ra2-rb2
rdi92=ra3-rb3
rdi93=ra4-rb4

#================ T E S T   R E C O R D   C O D E =========================

#-------------- PT-I --------------
PTI1=[]
for i in range(10):    
    PTI2=random.randint(15,25)
    PTI1.append(PTI2)
    
PTI3=PTI1[5]
PTI4=PTI1[2]
PTI5=PTI1[6]
PTI6=PTI1[9]
PTI7=PTI1[3]

#-------------- HYE --------------
HYE1=[]
for i in range(10):    
    HYE2=random.randint(55,85)
    HYE1.append(HYE2)
    
HYE3=HYE1[5]
HYE4=HYE1[2]
HYE5=HYE1[6]
HYE6=HYE1[9]
HYE7=HYE1[3]
    
#-------------- PT-II --------------
PTII_1=[]
for i in range(10):    
    PTII_2=random.randint(27,40)
    PTII_1.append(PTII_2)
    
PTII_3=PTII_1[5]
PTII_4=PTII_1[2]
PTII_5=PTII_1[6]
PTII_6=PTII_1[9]
PTII_7=PTII_1[3]
    
#=================================================================================
for i in range(1,21):
    choice1=input("Do you want to know anything else? ")
    
    ch1="""1) Fees Details
2) Participation in activities
3) Monthly Attendance
4) Previous exam Result"""
    sc()

    ch2="""1) Periodic Test-I
2) Half Yearly Examination
3) Periodic Test-II"""


#===========================================================================================

    if choice1=='yes' or choice1=='Yes' or choice1=='YES':
        print(ch1)
        sc()
        sel1=input("Select your choice(1,2,3,4): ")
        sc()
        if sel1=="1":
            FD()
        elif sel1=="2":
            print(a)
            print(" ----- PARTICIPATION IN ACTIVITIES -----")
            print(c)
            print("Participated in   |  Month")
            print(c)
            print("Sports            |  May")
            print("Art & Craft       |  August")
            print("Science Olympiad  |  November")
            print("Dance             |  December")
            print(c)
            sc()
        elif sel1=="3":
            print(h)
            print("  ----------------- MONTHLY ATTENDANCE --------------")
            print(g)
            print("Month         |   Working Days   |   Present   |   Absent  |")
            print(g)
            print("April         |       ",ra1,"       |    ",rdi9,"     |    ",rb1,"    |")
            print("June          |       ",ra3,"       |    ",rdi92,"     |    ",rb3,"    |")
            print("July          |       ",ra2,"       |    ",rdi91,"     |    ",rb2,"    |")
            print("August        |       ",ra4,"       |    ",rdi93,"     |    ",rb4,"    |")
            print("September     |       ",ra4,"       |    ",rdi93,"     |    ",rb4,"    |")
            print("October       |       ",ra3,"       |    ",rdi92,"     |    ",rb3,"    |")
            print("November      |       ",ra2,"       |    ",rdi91,"     |    ",rb2,"    |")
            print("December      |       ",ra3,"       |    ",rdi92,"     |    ",rb3,"    |")
            print(g)
        elif sel1=="4":#=======================  W O R K I N G =============================================
            print(h)
            print(" ----------------- PREVIOUS EXAM RESULTS --------------")
            print(g)
            print(ch2)
            sc()
            sel2=input("Select Exam for result(1,2,3): ")
            sc()
            if sel2=="1":
                print(h)
                print(" -------------------- PERIODIC TEST-I -----------------")
                print(g)
                print("SUBJECT             |      M.M.     |  Marks Obtained  |")
                print(g)
                print("Maths               |       25      |        ",PTI3,"        |")
                print("Chemistry           |       25      |        ",PTI4,"        |")
                print("Physics             |       25      |        ",PTI5,"        |")
                print("English             |       25      |        ",PTI3,"        |")
                print("Computer Science    |       25      |        ",PTI6,"        |")
                print("Physical Education  |       25      |        ",PTI7,"        |")
                print(g)
                toper()
                print(g)
                sc()
            elif sel2=="2":
                print(g)
                print(h)
                print(" ---------------- HALF YEARLY EXAMINATION -------------")
                print(g)
                print("SUBJECT             |      M.M.     |  Marks Obtained  |")
                print(g)
                print("Maths               |       80      |        ",HYE3,"        |")
                print("Chemistry           |       80      |        ",HYE4,"        |")
                print("Physics             |       80      |        ",HYE5,"        |")
                print("English             |       80      |        ",HYE3,"        |")
                print("Computer Science    |       80      |        ",HYE6,"        |")
                print("Physical Education  |       80      |        ",HYE7,"        |")
                print(g)
                HYtoper()
                print(g)
                sc()
            elif sel2=="3":
                print(h)
                print(" -------------------- PERIODIC TEST-II -----------------")
                print(g)
                print("SUBJECT             |      M.M.     |  Marks Obtained  |")
                print(g)
                print("Maths               |       40      |        ",PTII_3,"        |")
                print("Chemistry           |       40      |        ",PTII_4,"        |")
                print("Physics             |       40      |        ",PTII_5,"        |")
                print("English             |       40      |        ",PTII_3,"        |")
                print("Computer Science    |       40      |        ",PTII_6,"        |")
                print("Physical Education  |       40      |        ",PTII_7,"        |")
                print(g)
                Ptoper()
                print(g)
                sc()
            else:
                print("You have not selected any option")
                break
        else:
            print("You have not selected any option")
            break
    else:
        NS()
        break

# =================== Teachers Info. ===========================

tin1=input("Do you want to know about subject teachers? ")

tin2=input("Enter Class: ")
sc()

teach1="""|     SUBJECT       |     TEACHER NAME      |   PHONE NO.   |
_____________________________________________________________
| Maths             |  Manish Sharma        | Not Available |      
| Chemistry         |  Bhoj Patel           | ------//----- |
| Physics           |  Manoj Singh Thakur   | ------//----- |
| Biology           |  Litesh Kumar Samal   | ------//----- |
| English           |  Dayashankar Samal    | Not Available |
| Hindi             |  Manju Mahapatra      | ------//----- |
| Computer          |  Archana Kumari       | ------//----- |
| Social Science    |  Subodh Pandey        | ------//----- |"""

teach2="""|     SUBJECT       |     TEACHER NAME      |   PHONE NO.   |
_____________________________________________________________
| Maths             |  C.P. Dewangan        | Not Available |      
| Chemistry         |  Bhoj Patel           | ------//----- |
| Physics           |  Manoj Singh Thakur   | ------//----- |
| Biology           |  Litesh Kumar Samal   | ------//----- |
| English           |  Pushtam Patel        | Not Available |
| Hindi             |  Manju Mahapatra      | ------//----- |
| Computer          |  Archana Kumari       | ------//----- |"""

teach3="""|     SUBJECT       |     TEACHER NAME      |   PHONE NO.   |
_____________________________________________________________
| English           |  Dayashankar Samal    | Not Available |
| Hindi             |  Manju Mahapatra      | ------//----- |
| Computer          |  Archana Kumari       | ------//----- |
| Banking           |  Abhishek Gupta       | ------//----- |
| Accountancy       |  Ruchi Sharma         | ------//----- |
| Economics         |  Manoj Kumar Behra    | ------//----- |"""

if tin1=="yes" or tin1=="Yes" or tin1=="YES":
    if tin2=="9" or tin2=="IX" or tin2=="10" or tin2=="X" or tin2=="X ":
        tch()         
        print(teach1)
        print(i)
    elif tin2=="XII" or tin2=="12" or tin2=="11 Science" or tin2=="XI Science" or tin2=="xii science" or tin2=="12 SCIENCE" or tin2=="XII Science" or tin2=="xii science" or tin2=="XII SCIENCE":
        tch()            
        print(teach2)
        print(i)
    elif tin2=="11" or tin2=="XI" or tin2=="11 Commerce" or tin2=="XI Commerce" or tin2=="xii commerce" or tin2=="12 commerce" or tin2=="XII Commerce" or tin2=="xii commerce" or tin2=="XII COMMERCE":
        tch()              
        print(teach2)
        print(i)
else:
    print("Thanks for coming!☻")
sc()


#======================== FEEDBACK FORM =================

sc()
print(h)
print(" -------------------- FEEDBACK FORM -----------------")
print(g)
f = input("If you want any changes give your feedback: ")

print("Thanks for giving your feedback!")
sc()
print("We'll try to update our software according to your feedback...")
Thank()












