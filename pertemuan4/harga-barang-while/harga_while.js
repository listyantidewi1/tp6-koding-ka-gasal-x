let total = 0;
let input;

while (true) {
  input = prompt("Masukkan harga barang (atau 'selesai' untuk berhenti): ");
  if (input.toLowerCase() === "selesai") break;
  total += parseFloat(input);
}

console.log(`Total harga: ${total.toFixed(2)}`);
