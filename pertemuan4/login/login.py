password_benar = "rahasia123"

while True:
    input_password = input("Masukkan password: ")
    if input_password == password_benar:
        print("Login berhasil!")
        break
    else:
        print("Password salah! Coba lagi.")