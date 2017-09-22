from Tkinter import *

root = Tk()
root.title(string = "JC62")

Label(root, text = "registers").grid(row = 0, column = 0,
                                        columnspan = 12)

Label(root, text = " AC ",
        width = 12).grid(row = 1, column = 0,
                             columnspan = 6)
e_ac = Entry(root, width = 12)
e_ac.grid(row = 2, column = 0, columnspan = 6)
Label(root, text = " B  ",
        width = 12).grid(row = 1, column = 6,
                             columnspan = 6)
e_b = Entry(root, width = 12)
e_b.grid(row = 2, column = 6,  columnspan = 6)


Label(root, text = "flags").grid(row = 3, column = 0,
                                    columnspan = 12)


Label(root, text = "N ",
        width = 2).grid(row = 4, column = 1)
e_n = Entry(root, width = 2)
e_n.grid(row = 5, column = 1)
Label(root, text = "C ",
        width = 2).grid(row = 4, column = 2)
e_c = Entry(root, width = 2)
e_c.grid(row = 5, column = 2)
Label(root, text = "N ",
        width = 2).grid(row = 4, column = 3)
e_n = Entry(root, width = 2)
e_n.grid(row = 5, column = 3)
Label(root, text = "C ",
        width = 2).grid(row = 4, column = 4)
e_c = Entry(root, width = 2)
e_c.grid(row = 5, column = 4)
Label(root, text = "N ",
        width = 2).grid(row = 4, column = 5)
e_n = Entry(root, width = 2)
e_n.grid(row = 5, column = 5)
Label(root, text = "C ",
        width = 2).grid(row = 4, column = 6)
e_c = Entry(root, width = 2)
e_c.grid(row = 5, column = 6)
Label(root, text = "N ",
        width = 2).grid(row = 4, column = 7)
e_n = Entry(root, width = 2)
e_n.grid(row = 5, column = 7)
Label(root, text = "C ",
        width = 2).grid(row = 4, column = 8)
e_c = Entry(root, width = 2)
e_c.grid(row = 5, column = 8)
Label(root, text = "N ",
        width = 2).grid(row = 4, column = 9)
e_n = Entry(root, width = 2)
e_n.grid(row = 5, column = 9)
Label(root, text = "C ",
        width = 2).grid(row = 4, column = 10)
e_c = Entry(root, width = 2)
e_c.grid(row = 5, column = 10)

root.mainloop()
