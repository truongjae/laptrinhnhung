#include <REGX51.H>

#define hour P3_6
#define min P3_7
#define led1 P2_0
#define led2 P2_1
#define led3 P2_2
#define led4 P2_3

#define on 0
#define off 1

char so[] = {0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90};

void delay(int time){
	while(time--){
		TMOD = 0x01;
		TH0 = 0xfc;
		TL0	= 0x18;
		TR0 = 1;
		while(!TF0);
		TF0 = 0;
		TR0 = 0;
	}
}

void hienThi(unsigned char gio, unsigned char phut){
	unsigned char chuc0,chuc1, donvi0,donvi1, i;
	chuc0 = gio/10; donvi0 = gio%10;
	chuc1 = phut/10; donvi1 = phut%10;
	for(i=0;i<25;i++){
		led1 = on; P0= so[chuc0]; delay(10); led1 = off;
		led2 = on; P0= so[donvi0]; delay(10); led2 = off;
		led3 = on; P0= so[chuc1]; delay(10); led3 = off;
		led4 = on; P0= so[donvi1]; delay(10); led4 =  off;
	}
	
}
void main(){
	unsigned char gio = 0,phut=0,giay =0;
	P3_0 = 0;
	while(1){
		P3_0 = ~P3_0;
		hienThi(gio,phut);
		if(giay==59) phut++;
		if(phut==59) gio++;
		if(hour==0) gio++;
		if(min==0) phut++;
		if(phut>59) phut=0;
		if(gio>23) gio=0;
		P3_7 = 0;
	}
}