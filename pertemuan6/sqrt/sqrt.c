 #include <stdio.h>
 #include <math.h>
   
 int main() {
    double angka;
    printf("Masukkan angka untuk akar kuadrat: ");
    scanf("%lf", &angka);
  
    printf("Akar kuadrat (dengan math.h): %.5f\n", sqrt(angka));
     
    double sudut;
    printf("Masukkan sudut dalam radian untuk menghitung sinus: ");
    scanf("%lf", &sudut);
  
    printf("Sinus (dengan math.h): %.5f\n", sin(sudut));
  
    return 0;
}
  
