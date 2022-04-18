#include <REGX51.H>

char hieuUngSangXuoi[] = {0xFE,0xFD,0xFB,0xF7,0xEF,0xDF,0xBF,0x7F};
char hieuUngSangNguoc[] = {0x7F,0xBF,0xDF,0xEF,0xF7,0xFB,0xFD,0xFE};

void delay(int time){
	while(time--);
}

void blink(int n){
	int i;
	for(i=0;i<n;i++){
		P0=0; P2=0; P3=0;
		delay(30000);
		P0=0xff; P1=0xff; P2=0xff; P3=0xff;
		delay(30000);
	}
}

void sangXuoi(int n){
	int i;
	for(i=0;i<n;i++)
	{
	P0_0 = 0;    delay(30000);    P0_0 = 1;
    P0_1 = 0;    delay(30000);    P0_1 = 1;
    P0_2 = 0;    delay(30000);    P0_2 = 1;
    P0_3 = 0;    delay(30000);    P0_3 = 1;
    P0_4 = 0;    delay(30000);    P0_4 = 1;
    P0_5 = 0;    delay(30000);    P0_5 = 1;
    P0_6 = 0;    delay(30000);    P0_6 = 1;
    P0_7 = 0;    delay(30000);    P0_7 = 1;
    P2_0 = 0;    delay(30000);    P2_0 = 1;
    P2_1 = 0;    delay(30000);    P2_1 = 1;
    P2_2 = 0;    delay(30000);    P2_2 = 1;
    P2_3 = 0;    delay(30000);    P2_3 = 1;
    P2_4 = 0;    delay(30000);    P2_4 = 1;
	P0_2 = 0;    delay(30000);    P0_2 = 1;
    P2_5 = 0;    delay(30000);    P2_5 = 1;
    P2_6 = 0;    delay(30000);    P2_6 = 1;
    P2_7 = 0;    delay(30000);    P2_7 = 1;
	P0_3 = 0;    delay(30000);    P0_3 = 1;
	P0_7 = 0;    delay(30000);    P0_7 = 1;
    P3_0 = 0;    delay(30000);    P3_0 = 1;
    P3_1 = 0;    delay(30000);    P3_1 = 1;
    P3_2 = 0;    delay(30000);    P3_2 = 1;
	P2_0 = 0;    delay(30000);    P2_0 = 1;
	P2_4 = 0;    delay(30000);    P2_4 = 1;
    P3_3 = 0;    delay(30000);    P3_3 = 1;
	P0_0 = 0;    delay(30000);    P0_0 = 1;
    P3_4 = 0;    delay(30000);    P3_4 = 1;
    P3_5 = 0;    delay(30000);    P3_5 = 1;
    P3_6 = 0;    delay(30000);    P3_6 = 1;
    P3_7 = 0;    delay(30000);    P3_7 = 1;
	P1_0 = 0;    delay(30000);    P1_0 = 1;
    P1_1 = 0;    delay(30000);    P1_1 = 1;
    P1_2 = 0;    delay(30000);    P1_2 = 1;
    P1_3 = 0;    delay(30000);    P1_3 = 1;
    P1_4 = 0;    delay(30000);    P1_4 = 1;
    P1_5 = 0;    delay(30000);    P1_5 = 1;
    P1_6 = 0;    delay(30000);    P1_6 = 1;
    P1_7 = 0;    delay(30000);    P1_7 = 1;
	}
}
void sangNguoc(int n){
	int i;
	for(i=0;i<n;i++){
    P1_7 = 0;    delay(10000);    P1_7 = 1;
    P1_6 = 0;    delay(10000);    P1_6 = 1;
    P1_5 = 0;    delay(10000);    P1_5 = 1;
    P1_4 = 0;    delay(10000);    P1_4 = 1;
    P1_3 = 0;    delay(10000);    P1_3 = 1;
    P1_2 = 0;    delay(10000);    P1_2 = 1;
    P1_1 = 0;    delay(10000);    P1_1 = 1;
	P1_0 = 0;    delay(10000);    P1_0 = 1;
    P3_7 = 0;    delay(10000);    P3_7 = 1;
    P3_6 = 0;    delay(10000);    P3_6 = 1;
    P3_5 = 0;    delay(10000);    P3_5 = 1;
    P3_4 = 0;    delay(10000);    P3_4 = 1;
	P0_0 = 0;    delay(10000);    P0_0 = 1;
    P3_3 = 0;    delay(10000);    P3_3 = 1;
	P2_4 = 0;    delay(10000);    P2_4 = 1;
	P2_0 = 0;    delay(10000);    P2_0 = 1;
    P3_2 = 0;    delay(10000);    P3_2 = 1;
    P3_1 = 0;    delay(10000);    P3_1 = 1;
    P3_0 = 0;    delay(10000);    P3_0 = 1;
	P0_7 = 0;    delay(10000);    P0_7 = 1;
	P0_3 = 0;    delay(10000);    P0_3 = 1;
    P2_7 = 0;    delay(10000);    P2_7 = 1;
    P2_6 = 0;    delay(10000);    P2_6 = 1;
    P2_5 = 0;    delay(10000);    P2_5 = 1;
	P0_2 = 0;    delay(10000);    P0_2 = 1;
    P2_4 = 0;    delay(10000);    P2_4 = 1;
    P2_3 = 0;    delay(10000);    P2_3 = 1;
    P2_2 = 0;    delay(10000);    P2_2 = 1;
    P2_1 = 0;    delay(10000);    P2_1 = 1;
    P2_0 = 0;    delay(10000);    P2_0 = 1;
    P0_7 = 0;    delay(10000);    P0_7 = 1;
    P0_6 = 0;    delay(10000);    P0_6 = 1;
    P0_5 = 0;    delay(10000);    P0_5 = 1;
    P0_4 = 0;    delay(10000);    P0_4 = 1;
    P0_3 = 0;    delay(10000);    P0_3 = 1;
    P0_2 = 0;    delay(10000);    P0_2 = 1;
    P0_1 = 0;    delay(10000);    P0_1 = 1;
P0_0 = 0;    delay(10000);    P0_0 = 1;
	}
}

void loangTaLaNgoang(int lan) {
	int i, j;
	for (i=0; i<lan; i++) {
		for (j=0; j<8; j++) {
			P0=P2=P3=hieuUngSangXuoi[j];
			delay(5000);
		}
	}
}
// Doi xung 1
void coGiat(int lan) {
	int i,j;
	for (i=0; i<lan; i++) {
		for (j=0; j<8; j++) {
			P0 = P1 = 0;
			P2 = P3 = 0xff;
			delay(10000);
			
			P0 = P1 = 0xff;
			P2 = P3 = 0;
			delay(10000);
		}
	}

}


void xungQuanh(int n){
	int i;
	for(i=0;i<n;i++)
	{
	P0_0 = 0;    delay(30000);    P0_0 = 1;
    P0_1 = 0;    delay(30000);    P0_1 = 1;
    P0_2 = 0;    delay(30000);    P0_2 = 1;
   	P2_5 = 0;    delay(30000);    P2_5 = 1;
	P2_6 = 0;    delay(30000);    P2_6 = 1;
	P2_7 = 0;    delay(30000);    P2_7 = 1;
//	P2_6 = 0;    delay(30000);    P2_6 = 1;
	P0_3 = 0;    delay(30000);    P0_3 = 1;
	P0_4 = 0;    delay(30000);    P0_4 = 1;
	P0_5 = 0;    delay(30000);    P0_5 = 1;
	P0_6 = 0;    delay(30000);    P0_6 = 1;
	P0_7 = 0;    delay(30000);    P0_7 = 1;
	P3_0 = 0;    delay(30000);    P3_0 = 1;
	P3_1 = 0;    delay(30000);    P3_1 = 1;
	P3_2 = 0;    delay(30000);    P3_2 = 1;
	P2_0 = 0;    delay(30000);    P2_0 = 1;
	P2_1 = 0;    delay(30000);    P2_1 = 1;
	P2_2 = 0;    delay(30000);    P2_2 = 1;	   
	P2_3 = 0;    delay(30000);    P2_3 = 1;
	P2_4 = 0;    delay(30000);    P2_4 = 1;
	P3_3 = 0;    delay(30000);    P3_3 = 1;
	}
}



void main(){
	while(1){
		//blink(3);
		//loangTaLaNgoang(3);
		//coGiat(3);
		//sangXuoi(2);
		//sangNguoc(2);
		xungQuanh(2);
	}
}
