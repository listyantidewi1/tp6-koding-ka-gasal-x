import random
   
captcha = random.randint(1000, 9999)
print(f"Kode CAPTCHA: {captcha}")
   
input_user = int(input("Masukkan kode CAPTCHA: "))
   
if input_user == captcha:
    print("Verifikasi berhasil.")
else:
    print("Verifikasi gagal.")