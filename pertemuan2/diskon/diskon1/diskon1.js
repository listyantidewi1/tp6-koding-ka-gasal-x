let harga1 = 25000,
  harga2 = 15000,
  harga3 = 14000;
let total = harga1 + harga2 + harga3;
let diskon = total * 0.05;
console.log(`Total setelah diskon 5%: ${(total - diskon).toFixed(2)}`);
