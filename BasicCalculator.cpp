#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

void write(int res){
	
	printf("Sonucunuz:\t%d",res);
	
}

int sum(int num1, int num2){
	
	int res;
	res=num1+num2;
	write(res);
	return res;
}
int sub(int num1, int num2){
	
	int res;
	if(num1>=num2){
		res=num1-num2;
		write(res);
		return res;
	}
	else{
		res=num1-num2;
		res*=(-1);
		write(res);
		return res;
	}	
}
int multiplication(int num1, int num2){
	
	int res;
	res=num1*num2;
	write(res);
	return res;
}

float division(float num1, float num2){
	
	float res;
	if(num2!=0){
		res=num1/num2;
		write(res);
		return res;
	}
	else{
		printf("Sifira bolunme hatasi. Tekrar deneyiniz...");
	}
	
}


int main(){
	
	int num1,num2,choose,control=1,choo;
	
	while(control==1){
		printf("\nMerhaba, hesaplama islemine devam etmek istiyor musunuz:\n1-)Evet\n2-)Hayir\n");
		scanf("%d",&choo);
		
		if(choo==1){
		
		printf("Hesaplamak istediginiz ilk sayiyi giriniz:\t");
		scanf("%d",&num1);
		
		printf("Hesaplamak istediginiz ikinci sayiyi giriniz:\t");
		scanf("%d",&num2);
		
		printf("Hangi islemi yapmak istiyorsunuz:\n1-)Toplama\n2-)Cikarma\n3-)Caprma\n4-)Bolme\n");
		scanf("%d",&choose);
		
			switch(choose){
				case 1:
					sum(num1,num2);
					break;
				case 2:
					sub(num1,num2);
					break;
				case 3:
					multiplication(num1,num2);
					break;
				case 4:
					division(num1,num2);
					break;
				default:
					printf("Hatali giris yaptiniz.\n");	
			}
		}
		else{
			
			printf("\nHesaplama islemi tamamlandi.\n");
			control=0;
		}
	 }
	getch(); return 0;
}
