// Fungsi untuk menghitung total harga setelah diskon
function hitungTotalSetelahDiskon(harga, jumlah, diskon) {
  let totalSebelumDiskon = harga * jumlah;
  let totalDiskon = totalSebelumDiskon * (diskon / 100);
  return totalSebelumDiskon - totalDiskon;
}

// Program utama
let harga = parseFloat(prompt("Masukkan harga barang: "));
let jumlah = parseInt(prompt("Masukkan jumlah barang: "));
let diskon = parseFloat(prompt("Masukkan diskon dalam persen: "));

// Memanggil fungsi untuk menghitung total setelah diskon
let totalSetelahDiskon = hitungTotalSetelahDiskon(harga, jumlah, diskon);

// Menampilkan hasil
console.log(`Total harga setelah diskon: Rp${totalSetelahDiskon.toFixed(2)}`);
