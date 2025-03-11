let saldo = parseFloat(prompt("Masukkan saldo: "));
let penarikan = parseFloat(prompt("Masukkan jumlah penarikan: "));

if (penarikan <= saldo) {
  saldo -= penarikan;
  console.log(`Transaksi berhasil! Sisa saldo: ${saldo.toFixed(2)}`);
} else {
  console.log("Saldo tidak cukup.");
}
