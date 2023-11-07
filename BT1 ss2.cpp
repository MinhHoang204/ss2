#include <stdio.h>
 
/*T?o hàm tính chu vi h?nh ch? nh?t*/
void ChuViVuong(int a){
  //khai báo bi?n P là chu vi h?nh vuông
  int P;
  //tính chu vi s? d?ng công th?c dài nhân 4
  P = 4 * a;
  //hi?n th? chu vi ra màn h?nh
  printf("\nChu vi h?nh vuông là: %d",P);
}
/*T?o hàm tính di?n tích h?nh vuông*/
void DienTichVuong(int a){
  //khai báo bi?n S là di?n tích h?nh vuông
  int S;
  //tính di?n tích b?ng công th?c b?nh phýõng c?nh a
  S = a * a;
  //hi?n th? k?t qu? ra màn h?nh
  printf("\nDi?n tích h?nh vuông là: %d",S);
}
 
int main(){
  //khai báo hai bi?n a và b là chi?u dài c?nh vuông
  int a;
  //yêu c?u ngý?i dùng nh?p vào chi?u dài c?nh vuông
  printf("Nh?p chi?u dài a: ");
  scanf("%d", &a);
  //g?i hàm tính chu vi và di?n tích ð? vi?t
  ChuViVuong(a);
  DienTichVuong(a);
   
  printf("\n-------------------------------\n");
  printf("Chýõng tr?nh này ðý?c ðãng t?i codehow.net");
  return 0;
}
