//
//  main.c
//  vducayatmtestlai
//
//  Created by Nguyen Quang Thanh on 27/06/2022.
//
int loggin(int username, int pass);
int withdraw(int sotiengoc, int sotienrut);
int menu();
int transfer(int id, int sotiengoc, int chuyenkhoan);
int check(int sotiengoc);
int exxit();
#include <stdio.h>

int main(int argc, const char * argv[]) {
int user, pass,id,chuyenkhoan,sotiennguoinhan;
int sotiengoc=10000000,sotienrut;
int luachon,sodem=0;
int tieptuc;
    do{
        printf("Nhap ten tai khoan cua ban :");
        scanf("%d",&user);
        
        printf("Nhap ma pass :");
        scanf("%d",&pass);

if (loggin(user, pass)==1) {
        printf("Ban da dang nhap thanh cong\n");
    do{
        menu();
        printf("Moi ban lua chon\n");
        scanf("%d",&luachon);
        
        switch (luachon) {
            case 1:
                sotiengoc = withdraw(sotiengoc, sotienrut);
                break;
            case 2:
                sotiennguoinhan= transfer(id, sotiengoc, chuyenkhoan);
                break;
            case 3:
               sotiengoc =check(sotiengoc);
                break;
            case 4:
                exxit();
                return 0;
                break;
                
    }   printf("Ban co muon tiep tuc khong ");
        scanf("%d",&tieptuc);
        
    }while(tieptuc==1);
        printf("Ban da thoat\n");
    return 0;
}else
    sodem++;
        printf("Ban da dang nhap that bai\n");
    }while(sodem<3);
        printf("Tai khoan cua ban da bi khoa\n");
    
    return 0;
}
int loggin(int username, int pass){
    if (username==123 && pass==456) {
        return 1;
    }else return 0;
}
int menu(){
        printf("1.Rut tien\n");
        printf("2.Chuyen khoan\n");
        printf("3. Kiem tra so du\n");
        printf("4. Exit\n");
    return menu;
}


int withdraw(int sotiengoc, int sotienrut){
    do{
        printf("Nhap so tien ban muon rut :");
        scanf("%d",&sotienrut);
    if (sotienrut>50000 && sotienrut<3000000) {
        sotiengoc = sotiengoc - sotienrut;
        printf("So tien ban da rut la :%d\n",sotienrut);
        printf("So tien con lai trong tai khoan ban la : %d\n",sotiengoc);
    }else
        printf("Ban rut tien that bai\n");
        printf("Moi ban nhap lai so tien muon rut\n");
    }while(1);
    
        
   return sotiengoc;
}
int transfer(int id, int sotiengoc, int chuyenkhoan){
    int id_nguoinhan;
    int sotiennguoinhan=150000;
        printf("Nhap id nguoi nhan Bank Techcombank:");
        scanf("%d",&id_nguoinhan);
        printf("CHU HIEN MY\n");
        printf("Nhap so tien chuyen khoan :");
        scanf("%d",&chuyenkhoan);
    if (chuyenkhoan<sotiengoc) {
        sotiengoc = sotiengoc-chuyenkhoan;
        printf("SO du con lai la %d\n",sotiengoc);
        sotiennguoinhan = sotiennguoinhan+chuyenkhoan;
        printf("So tien nguoi nhan %d\n",sotiennguoinhan);
    }else
        printf("Nhap lai so tien ban muon chuyen\n");
    return sotiennguoinhan;
}
int check(int sotiengoc){
        printf("So du hien tai trong tai khoan ban la %d\n",sotiengoc);
    return sotiengoc;
}
int exxit(){
        printf("Ban da thoat khoi he thong\n");
    return exxit;
}
