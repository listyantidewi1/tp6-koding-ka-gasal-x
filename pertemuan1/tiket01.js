let kursiTersedia = 50;
let pesanan = parseInt(prompt("Masukkan jumlah kursi yang ingin dipesan: "));

if (pesanan <= kursiTersedia) {
  kursiTersedia -= pesanan;
  console.log(`Pemesanan berhasil! Sisa kursi: ${kursiTersedia}`);
} else {
  console.log("Kursi tidak cukup.");
}
