#include <stdio.h>
 
/*T?o h�m t�nh chu vi h?nh ch? nh?t*/
void ChuViVuong(int a){
  //khai b�o bi?n P l� chu vi h?nh vu�ng
  int P;
  //t�nh chu vi s? d?ng c�ng th?c d�i nh�n 4
  P = 4 * a;
  //hi?n th? chu vi ra m�n h?nh
  printf("\nChu vi h?nh vu�ng l�: %d",P);
}
/*T?o h�m t�nh di?n t�ch h?nh vu�ng*/
void DienTichVuong(int a){
  //khai b�o bi?n S l� di?n t�ch h?nh vu�ng
  int S;
  //t�nh di?n t�ch b?ng c�ng th?c b?nh ph��ng c?nh a
  S = a * a;
  //hi?n th? k?t qu? ra m�n h?nh
  printf("\nDi?n t�ch h?nh vu�ng l�: %d",S);
}
 
int main(){
  //khai b�o hai bi?n a v� b l� chi?u d�i c?nh vu�ng
  int a;
  //y�u c?u ng�?i d�ng nh?p v�o chi?u d�i c?nh vu�ng
  printf("Nh?p chi?u d�i a: ");
  scanf("%d", &a);
  //g?i h�m t�nh chu vi v� di?n t�ch �? vi?t
  ChuViVuong(a);
  DienTichVuong(a);
   
  printf("\n-------------------------------\n");
  printf("Ch��ng tr?nh n�y ��?c ��ng t?i codehow.net");
  return 0;
}
