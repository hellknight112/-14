#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int a,b,c;
	
	printf("�п�J�T���ΤT����abc����");
	printf("a="); scanf("%d",&a);
	printf("b="); scanf("%d",&b);
	printf("c="); scanf("%d",&c);
	
	
    if( (a+b) <= c ){
    	printf("�L�k�򦨤@�ӤT����"); 
	}
	else if( (a+c) <= b && (b>>a>>c || b>>c>>a)){
	    printf("�L�k�򦨤@�ӤT����"); 
	}
	else if( (b+c) <= a ){
	    printf("�L�k�򦨤@�ӤT����"); 
	}	
	else{
		printf("�i�H�򦨤@�ӤT����");
	} 
	printf("\n");
	
	system("PAUSE");
	return 0;
}
