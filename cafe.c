#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sum,lc,sl,gia;
    sum = 0;
    char dc;
    do{
        printf("Menu gom co:\n");
        printf("\n1.Caffe");
        printf("\n2.Huong duong");
        printf("\n3.Tra sua");
        printf("\n4.Nguoi yeu\n");
        printf("\nVui long nhap lua chon: ");
        scanf("%d",&lc);
    switch(lc){
        case 1:
            gia = 20000;
            printf("Caffe co gia la %d",gia);
            printf("\nNhap so luong: ");
            scanf("%d",&sl);
            printf("Ban da order %d Coffe",sl);
            sum += sl*gia;
            break;

        case 2:
            gia = 10000;
            printf("Huong duong co gia la %d",gia);
            printf("\nNhap so luong: ");
            scanf("%d",&sl);
            printf("\nBan da order %d Huong duong",sl);
            sum += sl*gia;
            break; 
         case 3:
            gia = 15000;
            printf("Tra sua co gia la %d",gia);
            printf("\nNhap so luong: ");
            scanf("%d",&sl);
            printf("\nBan da order %d Tra sua",sl);
            sum += sl*gia;
            break;
        case 4:
            printf("Ban lam gi co nguoi yeu ma goi ^^!");
            break;
    }
            printf("\nBan co muon tiep tuc order Y/N ?");
            fflush(stdin);
            scanf("%c", &dc);
     }while(dc == 'y' || dc == 'Y');
           printf("\nTong so tien can thanh toan la: %d VND",sum);
	return 0;
}
