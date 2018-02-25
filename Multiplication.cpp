#include <stdio.h>
#include <time.h>
int main(){
	clock_t start,stop;
	int a = 240;
	int b;
	
	
	
	int i = 0;
	start = clock();
	for(;i<299999999;i++){
			   
		b = a >> 3;
		b = a >> 3;
		b = a >> 3;
		b = a >> 3;
		
		b = a >> 3;
		b = a >> 3;
		b = a >> 3;
		b = a >> 3;
		
		b = a >> 3;
		b = a >> 3;
		b = a >> 3;
		b = a >> 3;
			
	}
	
	stop = clock();
	printf("b -> %d\n",b);
	printf("shifter->%ld\n",stop-start);
	
	
	
	i = 0;
	start = clock();
	for(;i<299999999;i++){
			   
		b = a / 8;
		b = a / 8;
		b = a / 8;
		b = a / 8;
		
		b = a / 8;
		b = a / 8;
		b = a / 8;
		b = a / 8;
		
		b = a / 8;
		b = a / 8;
		b = a / 8;
		b = a / 8;
			
	}
	
	stop = clock();
	printf("b -> %d\n",b);
	printf("divider->%ld\n",stop-start);
	
	return 0;
	
}
