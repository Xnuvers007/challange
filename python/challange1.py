# // 1. Buatlah program untuk menghitung luas segitiga
# // 2. Buatlah program untuk mencari nilai maksimum dari 3 buah bilangan
# // 3. Buatlah program untuk mencari jumlah dari sejumlah bilangan yang dimasukkan oleh pengguna
# // 4. Buatlah program untuk mencetak pola segitiga siku-siku
# // 5. Buatlah program untuk menghitung luas lingkaran

def luasSegitiga(alas, tinggi):
    luas = alas * tinggi / 2
    return luas

def maksimum(a, b, c):
    if a > b and a > c:
        return a
    elif b > a and b > c:
        return b
    else:
        return c

def jumlahBilangan(*bilangan):
    jumlah = 0
    for i in bilangan:
        jumlah += i
    return jumlah

def polaSegitigaSikuSiku(tinggi):
    for i in range(tinggi):
        for j in range(i+1):
            print("*", end="")
        print()

def luasLingkaran(jariJari):
    return 3.14 * jariJari * jariJari

print("Luas Segitiga: ", luasSegitiga(10, 5))
print("Nilai Maksimum: ", maksimum(10, 20, 30))
print("Jumlah Bilangan: ", jumlahBilangan(10, 20, 30, 40, 50))
polaSegitigaSikuSiku(5)
print("Luas Lingkaran: ", luasLingkaran(10))
