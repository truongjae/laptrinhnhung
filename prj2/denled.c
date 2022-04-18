#include <REGX51.H>

  
void delay(int time){
	while(time--);
}

void blink(int n){
	int i;
	for(i=0;i<n;i++){
		P0=0;
		delay(10000);
		P0=0xff;
		delay(10000);
	}
}
void leftRight(int n){
	int i;
	for(i=0;i<n;i++){
		P0_0 = 0;
		delay(10000);
		P0_0 = 1;

		P0_1 = 0;
		delay(10000);
		P0_1 = 1;

		P0_2 = 0;
		delay(10000);
		P0_2 = 1;

		P0_3 = 0;
		delay(10000);
		P0_3 = 1;

		P0_4 = 0;
		delay(10000);
		P0_4 = 1;

		P0_5 = 0;
		delay(10000);
		P0_5 = 1;

		P0_6 = 0;
		delay(10000);
		P0_6 = 1;

		P0_7 = 0;
		delay(10000);
		P0_7 = 1;
	}
} 
void rightLeft(int n){
	int i;
	for(i=0;i<n;i++){
		P0_7 = 0;
		delay(10000);
		P0_7 = 1;

		P0_6 = 0;
		delay(10000);
		P0_6 = 1;


		P0_5 = 0;
		delay(10000);
		P0_5 = 1;


		P0_4 = 0;
		delay(10000);
		P0_4 = 1;


		P0_3 = 0;
		delay(10000);
		P0_3 = 1;

		P0_2 = 0;
		delay(10000);
		P0_2 = 1;

		P0_1 = 0;
		delay(10000);
		P0_1 = 1;


		P0_0 = 0;
		delay(10000);
		P0_0 = 1;
	}
}
void right(){
		P0_7 = 0;
		delay(10000);
		P0_7 = 1;

		P0_6 = 0;
		delay(10000);
		P0_6 = 1;

		P0_5 = 0;
		delay(10000);
		P0_5 = 1;

		P0_4 = 0;
		delay(10000);
		P0_4 = 1;
}
void left(){
		P0_0 = 0;
		delay(10000);
		P0_0 = 1;


		P0_1 = 0;
		delay(10000);
		P0_1 = 1;

		P0_2 = 0;
		delay(10000);
		P0_2 = 1;

		P0_3 = 0;
		delay(10000);
		P0_3 = 1;
}
void leftmidright(){
		P0_0 = 0;
		delay(10000);
		P0_0 = 1;

		P0_7 = 0;
		delay(10000);
		P0_7 = 1;

		P0_1 = 0;
		delay(10000);
		P0_1 = 1;

		P0_6 = 0;
		delay(10000);
		P0_6 = 1;

		P0_2 = 0;
		delay(10000);
		P0_2 = 1;

		P0_5 = 0;
		delay(10000);
		P0_5 = 1;

		P0_3 = 0;
		delay(10000);
		P0_3 = 1;

		P0_4 = 0;
		delay(10000);
		P0_4 = 1;

}
void main(){
	while(1){
		//blink(10);
		//leftRight(3);
		//rightLeft(3);
		//left();
		//right();   
		//blink(2);;
		leftmidright();

		
	}
}
