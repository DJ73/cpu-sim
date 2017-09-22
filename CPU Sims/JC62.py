from Tkinter import *

def LDA (mem):
    # Taking mem to be a hex value already converted by caller
    global AC
    AC = mem
    return None

def STA (loc):
    Memory[loc] = AC
    return None

def MBA ():
    global B
    B = AC
    return None

def ADD ():
    global AC
    AC += B
    c_flag = AC/256
    AC %= 256
    return None

def SUB ():
    global AC
    if (B>AC):
        c_flag = 1
        AC += 256
    AC -= B
    return None

def JMP (loc):
    pass

def JN (loc):
    pass

def CMA ():
    global AC
    AC ^= 255
    return None

Memory = dict()
AC = 0
B = 0

def display ():
    # print "AC", bin(AC)[2:].rjust(8, '0'), "B", bin(B)[2:].rjust(8, '0')
    # for a in Memory:
    #     print a, Memory[a]
    # raw_input()
    return None

LDA(0x52)
display()

MBA()
display()

STA(0x2A)
display()

LDA(0x02)
display()

ADD()
display()

STA(3)
display()

LDA(0x03)
display()

SUB()
display()

STA(12)
display()
