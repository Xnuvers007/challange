#1. Buat sebuah program yang menerima input dari pengguna dan mencetak keluaran dalam bentuk tabel.

def table():

    count = 1

    try:

        line = int(input("line> "))

        col = int(input("column> "))

        print("\n* Table: ")

        for line_data in range(line):

            line_data+=1

            for data_col in range(col):

                data_col += count

                print(line_data * data_col, end="\t")

    except Exception as err:

        exit(err)

        

#table()

#2. Buat sebuah program yang menghitung jumlah karakter dalam sebuah string.

def counting_string():

    print("! enter text")

    try:

        text = input("?> ")

        str = text.replace(" ","")

        print(f"! Total: {len(str)}")

    except Exception as err:

        exit(err)

    

#counting_string()

#3. Buat sebuah program yang mengubah string menjadi array dan menghitung jumlah item dalam array tersebut.

def change_array_to_string():

    count,total = 0,[]

    text = input("! enter text\n? > ")

    for array in text.split():

        count+=1

        print(f"{count}. ","".join(array))

        total.append(count)

    print(f"* Total Items in array: {len(total)}")

    

#change_array_to_string()

#4. Buat sebuah program yang mengambil input dari pengguna dan mencetak hasilnya dalam bentuk tabel yang berisi jumlah kata-kata yang muncul dalam string tersebut.

def table_text():

    text = input("! enter text\n? > ")

    print("\n\tkata\t|\tJumlah\t\n---------------- -----------------")

    for kata in text.split():

        print(f" {''.join(kata)}\t\t|  {kata.split().count(kata)}")

    

#table_text()

#5. Buat sebuah program yang mengambil input dari pengguna dan mencetak hasilnya dalam bentuk tabel yang berisi jumlah karakter yang muncul dalam string tersebut.

def table_caracter():

    text = input("! enter text\n? > ")

    print("\n\tkata\t|\tJumlah\t\n---------------- -----------------")

    for kata in text.split():

        print(f" {''.join(kata)}\t\t|  {len(kata)}")

    

#table_caracter()

