#include <stdio.h>
#include <math.h>
char ten[20];
void  nhapTen(){
	printf("nhapten : ");
	scanf("%s",&ten);
}

void inTen(){
	printf("Ten nguoi dung : %s",ten);
}

int chinhPhuong(int n){
	double ketqua = sqrt((double)n);
	if(ketqua == (int)ketqua){
		return 1;
	}
	return 0;
}

int lapPhuong(int n){
	double ketqua = pow((double)n,1.0/3);
	if(ketqua == (int)ketqua){
		return 1;
	}
	return 0;
}

int menu(){
	int n,luachon;
	printf("------------MENU------------");
	printf("----1.nhap ten---------------");
	printf("----2.in ra ten nguoi dung do");
	printf("----3.Nhapn,ktrasochinhphuong");
	printf("----4.Nhapn,ktrasolapphuong");
	Printf("moi ban lua chon");
	scanf("%d",&luachon);
}

int main(){
	int luachon,flag1,flag2;
	while(luachon!=4){
		luachon=menu();
		switch(luachon){
			case 1:{
				nhapTen();
				inTen();
				break;
			}
		
			case 2:{
				int n,flag1;
				printf("nhap so nguyen : ");
				scanf("%d",n);
				flag1=chinhPhuong(n);
				(flag1==1) ? printf("do la so chinh phuong :") :  printf("do la so chinh phuong :");
				break;
			}
			
			case 3:{
				int n, flag2;
				printf("nhap so nguyen : ");
				scanf("%d",n);
				flag2=lapPhuong(n);
				(flag2==1) ? printf("do la so lap phuong :") :  printf("do la so lap phuong :");
				break;
			}
		
			default:{
				printf("nhap lai ");
				break;
			}
		}
	}			
}



//#include<stdio.h>
//#include<string.h>
//#include<math.h>
//
//int checkLapPhuong(int n){
//    float kq = pow((float)n,1.0/3);
//    if(kq == (int)kq) return 1;
//    else return 0;
//}
//
//int checkChinhPhuong(int n){
//    float kq = sqrt(n);
//    if(kq == (int)kq) return 1;
//    else return 0;
//}
//
//void inTen(char* ten){
//    printf("Ten nguoi dung la:\n");
//    puts(ten);
//}
//
//void nhapTen(char* ten){
//    printf("Nhap ten:\n");
//    // fflush(stdin);
//    // fgets(ten, sizeof(ten), stdin);
//    scanf("%s",ten);
//    fflush(stdin);
//}
//
//int menu(){
//    int c;
//    printf("------------MENU------------");
//    printf("\n[1].nhap ten");
//    printf("\n[2].in ra ten nguoi dung do");
//    printf("\n[3].Nhap n,k tra so chinh phuong");
//    printf("\n[4].Nhap n,k tra so lap phuong");
//    printf("\n[5]. Exit");
//    printf("\nmoi ban lua chon\n");
//    scanf("%d",&c);
//    fflush(stdin);
//    return c;
//}
//
//int main()
//{
//    int choice;
//    char ten[30];
//    do {
//        choice = menu();
//        switch(choice) {
//        case 1: {
//            nhapTen(ten);
//            break;
//        }
//        case 2: {
//            inTen(ten);
//            break;
//        }
//        case 3: {
//            int n;
//            printf("Nhap n:\n");
//            scanf("%d",&n);
//            if(checkChinhPhuong(n)) printf("%d la so chinh phuong\n",n);
//            else printf("%d khong la so chinh phuong\n",n);
//            break;
//        }
//        case 4: {
//            int n;
//            printf("Nhap n:\n");
//            scanf("%d",&n);
//            if(checkLapPhuong(n)) printf("%d la so lap phuong\n",n);
//            else printf("%d khong phai la so lap phuong\n",n);
//            break;
//        }
//        default:
//            break;
//        }
//    } while(choice>0 && choice<5);
//
//}
	
