#include <REGX51.H>

char hieuUngSangXuoi[] = {0xFE,0xFD,0xFB,0xF7,0xEF,0xDF,0xBF,0x7F};
char hieuUngSangNguoc[] = {0x7F,0xBF,0xDF,0xEF,0xF7,0xFB,0xFD,0xFE};

void delay(int time){
	while(time--);
}

void blink(int n){
	int i;
	for(i=0;i<n;i++){
		P0=0; P1=0; P2=0; P3=0;
		delay(10000);
		P0=0xff; P1=0xff; P2=0xff; P3=0xff;
		delay(10000);
	}
}

void leftToRight(){
	P0_0 = 0;    delay(5000);    P0_0 = 1;
    P0_1 = 0;    delay(5000);    P0_1 = 1;
    P0_2 = 0;    delay(5000);    P0_2 = 1;
    P0_3 = 0;    delay(5000);    P0_3 = 1;
    P0_4 = 0;    delay(5000);    P0_4 = 1;
    P0_5 = 0;    delay(5000);    P0_5 = 1;
    P0_6 = 0;    delay(5000);    P0_6 = 1;
    P0_7 = 0;    delay(5000);    P0_7 = 1;
    P2_0 = 0;    delay(5000);    P2_0 = 1;
    P2_1 = 0;    delay(5000);    P2_1 = 1;
    P2_2 = 0;    delay(5000);    P2_2 = 1;
    P2_3 = 0;    delay(5000);    P2_3 = 1;
    P2_4 = 0;    delay(5000);    P2_4 = 1;
    P2_5 = 0;    delay(5000);    P2_5 = 1;
    P2_6 = 0;    delay(5000);    P2_6 = 1;
    P2_7 = 0;    delay(5000);    P2_7 = 1;
    P3_0 = 0;    delay(5000);    P3_0 = 1;
    P3_1 = 0;    delay(5000);    P3_1 = 1;
    P3_2 = 0;    delay(5000);    P3_2 = 1;
    P3_3 = 0;    delay(5000);    P3_3 = 1;
    P3_4 = 0;    delay(5000);    P3_4 = 1;
    P3_5 = 0;    delay(5000);    P3_5 = 1;
    P3_6 = 0;    delay(5000);    P3_6 = 1;
    P3_7 = 0;    delay(5000);    P3_7 = 1;
	P1_0 = 0;    delay(5000);    P1_0 = 1;
    P1_1 = 0;    delay(5000);    P1_1 = 1;
    P1_2 = 0;    delay(5000);    P1_2 = 1;
    P1_3 = 0;    delay(5000);    P1_3 = 1;
    P1_4 = 0;    delay(5000);    P1_4 = 1;
    P1_5 = 0;    delay(5000);    P1_5 = 1;
    P1_6 = 0;    delay(5000);    P1_6 = 1;
    P1_7 = 0;    delay(5000);    P1_7 = 1;
}
void rightToLeft(){
	P1_7 = 0;    delay(5000);   P1_7 = 1;
   	P1_7 = 0;    delay(5000);    P1_7 = 1;
    P1_6 = 0;    delay(5000);    P1_6 = 1;
    P1_5 = 0;    delay(5000);    P1_5 = 1;
    P1_4 = 0;    delay(5000);    P1_4 = 1;
    P1_3 = 0;    delay(5000);    P1_3 = 1;
    P1_2 = 0;    delay(5000);    P1_2 = 1;
    P1_1 = 0;    delay(5000);    P1_1 = 1;
    P1_0 = 0;    delay(5000);    P1_0 = 1;
    P3_7 = 0;    delay(5000);    P3_7 = 1;
    P3_6 = 0;    delay(5000);    P3_6 = 1;
    P3_5 = 0;    delay(5000);    P3_5 = 1;
    P3_4 = 0;    delay(5000);    P3_4 = 1;
    P3_3 = 0;    delay(5000);    P3_3 = 1;
    P3_2 = 0;    delay(5000);    P3_2 = 1;
    P3_1 = 0;    delay(5000);    P3_1 = 1;
    P3_0 = 0;    delay(5000);    P3_0 = 1;
    P2_7 = 0;    delay(5000);    P2_7 = 1;
    P2_6 = 0;    delay(5000);    P2_6 = 1;
    P2_5 = 0;    delay(5000);    P2_5 = 1;
    P2_4 = 0;    delay(5000);    P2_4 = 1;
    P2_3 = 0;    delay(5000);    P2_3 = 1;
    P2_2 = 0;    delay(5000);    P2_2 = 1;
    P2_1 = 0;    delay(5000);    P2_1 = 1;
    P2_0 = 0;    delay(5000);    P2_0 = 1;
    P0_7 = 0;    delay(5000);    P0_7 = 1;
    P0_6 = 0;    delay(5000);    P0_6 = 1;
    P0_5 = 0;    delay(5000);    P0_5 = 1;
    P0_4 = 0;    delay(5000);    P0_4 = 1;
    P0_3 = 0;    delay(5000);    P0_3 = 1;
    P0_2 = 0;    delay(5000);    P0_2 = 1;
    P0_1 = 0;    delay(5000);    P0_1 = 1;
    P0_0 = 0;    delay(5000);    P0_0 = 1;
}

void leftToMid_rigthToMid(){
		P0_0=0;
		delay(5000);
		P0_0=1;
		P1_7=0;
		delay(5000);
		P1_7=1;
		P0_1=0;
		delay(5000);
		P0_1=1;
		P1_6=0;
		delay(5000);
		P1_6=1;
		P0_2=0;
		delay(5000);
		P0_2=1;
		P1_5=0;
		delay(5000);
		P1_5=1;
		P0_3=0;
		delay(5000);
		P0_3=1;
		P1_4=0;
		delay(5000);
		P1_4=1;
		P0_4=0;
		delay(5000);
		P0_4=1;
		P1_3=0;
		delay(5000);
		P1_3=1;
		P0_5=0;
		delay(5000);
		P0_5=1;
		P1_2=0;
		delay(5000);
		P1_2=1;
		P0_6=0;
		delay(5000);
		P0_6=1;
		P1_1=0;
		delay(5000);
		P1_1=1;
		P0_7=0;
		delay(5000);
		P0_7=1;
		P1_0=0;
		delay(5000);
		P1_0=1;
		P2_0=0;
		delay(5000);
		P2_0=1;
		P3_7=0;
		delay(5000);
		P3_7=1;
		P2_1=0;
		delay(5000);
		P2_1=1;
		P3_6=0;
		delay(5000);
		P3_6=1;
		P2_2=0;
		delay(5000);
		P2_2=1;
		P3_5=0;
		delay(5000);
		P3_5=1;
		P2_3=0;
		delay(5000);
		P2_3=1;
		P3_4=0;
		delay(5000);
		P3_4=1;
		P2_4=0;
		delay(5000);
		P2_4=1;
		P3_3=0;
		delay(5000);
		P3_3=1;
		P2_5=0;
		delay(5000);
		P2_5=1;
		P3_2=0;
		delay(5000);
		P3_2=1;
		P2_6=0;
		delay(5000);
		P2_6=1;
		P3_1=0;
		delay(5000);
		P3_1=1;
		P2_7=0;
		delay(5000);
		P2_7=1;
		P3_0=0;
		delay(5000);
		P3_0=1;

	
}
void midToLeft_midToRight(){
	P2_7=0;
	delay(5000);
	P2_7=1;
	P3_7=0;
	delay(5000);
	P3_7=1;
	P2_6=0;
	delay(5000);
	P2_6=1;
	P3_6=0;
	delay(5000);
	P3_6=1;
	P2_5=0;
	delay(5000);
	P2_5=1;
	P3_5=0;
	delay(5000);
	P3_5=1;
	P2_4=0;
	delay(5000);
	P2_4=1;
	P3_4=0;
	delay(5000);
	P3_4=1;
	P2_3=0;
	delay(5000);
	P2_3=1;
	P3_3=0;
	delay(5000);
	P3_3=1;
	P2_2=0;
	delay(5000);
	P2_2=1;
	P3_2=0;
	delay(5000);
	P3_2=1;
	P2_1=0;
	delay(5000);
	P2_1=1;
	P3_1=0;
	delay(5000);
	P3_1=1;

	P0_7=0;
	delay(5000);
	P0_7=1;
	P1_7=0;
	delay(5000);
	P1_7=1;
	P0_6=0;
	delay(5000);
	P0_6=1;
	P1_6=0;
	delay(5000);
	P1_6=1;
	P0_5=0;
	delay(5000);
	P0_5=1;
	P1_5=0;
	delay(5000);
	P1_5=1;
	P0_4=0;
	delay(5000);
	P0_4=1;
	P1_4=0;
	delay(5000);
	P1_4=1;
	P0_3=0;
	delay(5000);
	P0_3=1;
	P1_3=0;
	delay(5000);
	P1_3=1;
	P0_2=0;
	delay(5000);
	P0_2=1;
	P1_2=0;
	delay(5000);
	P1_2=1;
	P0_1=0;
	delay(5000);
	P0_1=1;
	P1_1=0;
	delay(5000);
	P1_1=1;
	
}
void tren_hai_ben(int lan){
	int i, j;
	for (i=0; i<lan; i++) {
		for (j=0; j<8; j++) {
			P0=hieuUngSangXuoi[j];
			P3=hieuUngSangNguoc[j];
			P1=hieuUngSangXuoi[j];
			P2=hieuUngSangNguoc[j];
			delay(5000);
		}
	}
}
void duoi_haiben(int lan) {
	int i,j;
	for (i=0; i<lan; i++) {
		for (j=0; j<8; j++) {
			P1 = hieuUngSangNguoc[j];
			P2 = hieuUngSangXuoi[j];
			P0 = hieuUngSangNguoc[j];
			P3 = hieuUngSangXuoi[j];
			delay(5000);
		}
	}
}

void sangXuoi(int lan) {
	int i, j;
	for (i=0; i<lan; i++) {
		for (j=0; j<8; j++) {
			P0=P1=P2=P3=hieuUngSangXuoi[j];
			delay(5000);
		}
	}
}
void sangNguoc(int lan) {
	int i, j;
	for (i=0; i<lan; i++) {
		for (j=0; j<8; j++) {
			P0=P1=P2=P3=hieuUngSangNguoc[j];
			delay(10000);
		}
	}
}
// Doi xung 1
void doixung1(int lan) {
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
// Doi xung 2
void doixung2(int lan) {
	int i,j;
	for (i=0; i<lan; i++) {
		for (j=0; j<8; j++) {
			P0 = P2 = 0;
			P1 = P3 = 0xff;
			delay(10000);
			
			P0 = P2 = 0xff;
			P1 = P3 = 0;
			delay(10000);
		}
	}
}
// Doi xung 3
void doixung3(int lan) {
	int i,j;
	for (i=0; i<lan; i++) {
		for (j=0; j<8; j++) {
			P0 = P3 = 0;
			P1 = P2 = 0xff;
			delay(10000);
			
			P0 = P3 = 0xff;
			P1 = P2 = 0;
			delay(10000);
		}
	}
}
void main(){
	while(1){
	/*	blink(2);
		leftToRight();
		rightToLeft();
		leftToMid_rigthToMid();
		midToLeft_midToRight();	  */
		//tren_hai_ben(5);
		sangXuoi(5);
		sangNguoc(5);
		doixung1(5);
		doixung2(5);
		doixung3(5);
	}
}
