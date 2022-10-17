#include <stdio.h>
#include "./add/add.h"
#include "./del/del.h"
#include "./div/div.h"
#include "./mult/mult.h"


int main() {

	float x,y,result;
	printf("enter nub:");
	scanf("%f %f",&x,&y);
	int modenub;
	printf("select mode:");
	scanf("%d",&modenub);
	switch(modenub){
			case 1:result=add(&x,&y);break;
			case 2:result=del(&x,&y);break;
			case 3:result=mult(&x,&y);break;
			case 4:result=div(&x,&y);break;
}
printf("%f",result);
return 0;
}

