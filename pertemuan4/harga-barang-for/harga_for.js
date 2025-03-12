let jumlah = parseInt(prompt("Masukkan jumlah barang: "));
let total = 0;

for (let i = 1; i <= jumlah; i++) {
  let harga = parseFloat(prompt(`Masukkan harga barang ke-${i}: `));
  total += harga;
}

console.log(`Total harga: ${total.toFixed(2)}`);
