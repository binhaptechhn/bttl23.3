#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int pin = 1997;
    int mp;
    int limit = 0;
    int sd = 1000000;
    int rut, sdht,stk;
    int lc;
    char ch;
    char fullname[50];

    do{
        printf("Nhap mat khau: ");
        scanf("%d", &mp);
        limit++;
        if (mp==pin){
            printf("Dang nhap thanh cong\n");
            do{
            printf("vui long thuc hien lua chon cua ban:\n");
            printf("1. Xem so du tai khoan:\n");
            printf("2. Rut tien:\n");
            printf("3. Nop tien:\n");
            printf("4. Chuyen tien:\n");
            printf("Nhap lua chon: ");
            scanf("%d", &lc);
            switch(lc){
                case 1:
                    printf("Xem so du tai khoan\n");
                    printf("So du tai khoan hien co la: %d VND", sd);
                    break;
                case 2:
                    printf("Nhap so tien muon rut:");
                    scanf("%d", &rut);
                    sdht = sd - rut;
                    if(rut>sd){
                        printf("Tai khoan khong du so du de thuc hien");
                    }
                    else 
                        printf("Rut tien thanh cong\n So du hien tai cua tai khoan con %d", sdht);
                    break;
                case 3:
                    printf("Nap tien vao tai khoan: ");
                    scanf("%d", &rut);
                    sdht = sd + rut;
                    printf("Nop tien thanh cong, so du hien tai cua tai khoan con %d", sdht);
                    break;
                case 4:
                	printf("Nhap stk muon nhan: ");               	
                	scanf("%d",&stk);
                	printf("\nNhap ten nguoi nhan: ");           
                	gets(fullname);
                	scanf("%[^\n]",&fullname);
                	printf("\nSo tai khoan va ten nguoi nhan la: %d %s",stk,fullname);
                	printf("\nNhap so tien muon chuyen:");
                    scanf("%d", &rut);
                    sdht = sd - rut;
                    if(rut>sd){
                        printf("So du tai khoan khong du so du de thuc hien");
                    }
                    else 
                        printf("Chuyen tien thanh cong\n So du hien tai cua tai khoan con %d", sdht);
                    break;               	  	
            }
            printf("\nBan co muon tiep tuc Y/N ?");
            fflush(stdin);
            scanf("%c", &ch);
            }while(ch == 'y' || ch == 'Y');
        }else printf("Nhap sai mat khau\n");
    } while (mp != pin && limit < 3);
    if (mp!=pin){
        printf("Tai khoan cua ban da bi khoa");}
	return 0;
}
