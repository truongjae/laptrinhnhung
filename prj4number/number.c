#include <REGX51.H>
char so[] = {0x40,0x79,0x24,0x30,0x19,0x12,0x02,0x78,0x00,0x10};
char so2[] = {0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};
void delay(int n){
	int a = n;
	while(n--);
	while(a--);
}
void one_to_nine(){
	//tao so 0
		P0_0=P0_1=P0_2=P0_3=P0_4=P0_5=0; P0_6=1;
		delay(45000);
	//tao so 1
		P0_1 = P0_2=0; P0_0= P0_3=P0_4 =P0_5=P0_6=1;
		delay(45000); 
	//tao so 2
		P0_0=P0_1=P0_3=P0_4=P0_6=0; P0_2=P0_5=1;  
		delay(45000);
	//tao so 3
		P0_0=P0_1=P0_3=P0_2=P0_6=0; P0_4=P0_5=1;  
		delay(45000); 
	//tao so 4  
		P0_1=P0_2=P0_5=P0_6=0 ; P0_3=P0_4=P0_0=1;
		delay(45000); 
	//tao so 5
		P0_3=P0_0=P0_5=P0_2=P0_6=0 ; P0_4=P0_1=1;  
		delay(45000);
	//tao so 6
		P0_4=P0_3=P0_0=P0_5=P0_2=P0_6=0 ; P0_1=1; 
		delay(45000);
	//tao so 7
		P0_0=P0_2=P0_1=0;P0_3=P0_4=P0_5=P0_6=1;	  
		delay(45000);
	//tao so 8
		P0_0=P0_1=P0_2=P0_3=P0_4=P0_5=P0_6=0; 
		delay(45000);
	//tao so 9
		P0_0=P0_1=P0_2=P0_3=P0_5=P0_6=0; P0_4 =1;
		delay(45000);
	// format
		P0_0=P0_1=P0_2=P0_3=P0_4=P0_5=P0_6=1;					 	

}
void one_to_nine_loop(){
	while(1){
	int i;
	for(i=0;i<10;i++){
		P0=so[i];
		delay(45000);
	}
	}
}
void hang_chuc(){
	while(1){
	int i;
	int j;
	for(i=0;i<10;i++){
		P0=so[i];
		for(j=0;j<10;j++){
			 P2=so[j];
			 delay(45000);
		}
	}
	}
}
void hang_chuc2(){
	 int i,j;
	 for(i=0;i<10;i++){
	  	P3=so2[i];
		delay(45000);
	 }
}
void main(){
	//hang_chuc();
	hang_chuc2();
}