#include<stdio.h>
float sum(float a, float b){
	return a+b;
}
float sub(float a,float b){
	return a-b;
}
float mul(float a,float b){
	return a*b;
}
float div(float a,float b){
	return a/b;
}
main(){
	float(*ptr)(float a,float b);
	//int re;
	int num =0;
	//ptr=sum;
	float a,b;
	//re= ptr(10,20);
	//printf("¿¬»ê °á°ú:%d %d\n",re,sum(30,40));
	
	printf("°è»ê¹æ½Ä ¼±ÅÃ(1:µ¡¼À,2:»¬¼À,3:°ö¼À,4:³ª´°¼À)\n");
	scanf("%d",&num);
	printf("µÎ ¼ýÀÚ\n");
	scanf("%f %f",&a,&b);
	if(num==1){
		ptr=sum;
	}
	else if(num==2){
		ptr=sub;
	}
	else if(num==3){
		ptr=mul;
	}
	else if(num==4){
		ptr=div;
		printf("¿¬»ê °á°ú:%.2f",ptr(a,b));
		return;
	}
	printf("¿¬»ê °á°ú:%.0f",ptr(a,b));
}
