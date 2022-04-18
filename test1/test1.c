					  #include <REGX51.H>
void delay(int time){
	while(time--);
}
void blink(int n){
	int i;
	for(i=0;i<n;i++){
		P0=0;
		delay(10000);
		P0=0xff;// ca mach p0 deu tat
		delay(10000);
	}
}	
void main(){ 
	P0 = 0;
	while(1){
		blink(10);
	}
}