let saldo = 50000;
let tarik = parseInt(prompt("Masukkan jumlah penarikan: "), 10);

if (isNaN(tarik)) {
  console.log("Input tidak valid. Harap masukkan angka.");
} else if (tarik <= saldo) {
  console.log("Transaksi Berhasil!");
} else {
  console.log("Saldo Tidak Cukup!");
}
