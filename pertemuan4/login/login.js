let passwordBenar = "rahasia123";
let input;

do {
  input = prompt("Masukkan password:");
  if (input === passwordBenar) {
    console.log("Login berhasil!");
    break;
  } else {
    console.log("Password salah! Coba lagi.");
  }
} while (true);
