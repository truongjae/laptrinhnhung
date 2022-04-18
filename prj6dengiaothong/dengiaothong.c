#include <REGX51.H>
char so[] = {0x40,0x79,0x24,0x30,0x19,0x12,0x02,0x78,0x00,0x10};

void delay(int time){
	while(time--);
}
void red(int n){
	int i,j;
	for(i=2;i>=n;i--){
		for(j=9;j>=n;j--){
			P2=so[i];
			P3=so[j];
			P0_0=0;
			P0_1=P0_2=1;
			delay(50000);
		}
	}
}

void yellow(int n){
	int i=0,j;
	for(j=9;j>=n;j--){
		P2=so[i];
		P3=so[j];
		P0_1=0;
		P0_0=P0_2=1;
		delay(50000);
	}
}

void green(int n){
	int i,j;
	for(i=2;i>=n;i--){
		for(j=9;j>=n;j--){
			P2=so[i];
			P3=so[j];
			P0_2=0;
			P0_0=P0_1=1;
			delay(50000);
		}
	}
}
void main(){
	while(1){
		red(0);
		yellow(0);
		green(0);
	}
}
