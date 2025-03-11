let captcha = Math.floor(1000 + Math.random() * 9000);
console.log(`Kode CAPTCHA: ${captcha}`);

let inputUser = parseInt(prompt("Masukkan kode CAPTCHA: "));

if (inputUser === captcha) {
  console.log("Verifikasi berhasil.");
} else {
  console.log("Verifikasi gagal.");
}
