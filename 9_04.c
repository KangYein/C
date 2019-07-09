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
	float(*ptr[4])(float a,float b)={sum,sub,mul,div};
	int num = 0;
	float a,b;
	
	printf("°è»ê¹æ½Ä ¼±ÅÃ (1: µ¡¼À,2: »¬¼À,3:°ö¼À,4:³ª´°¼À)\n");
	scanf("%d",&num);
	printf("µÎ ¼ýÀÚ\n");
	scanf("%f %f",&a,&b);
	if(num==4){
		printf("¿¬»ê °á°ú: %.2f\n", ptr[num-1](a,b));
	}
	else{
	printf("¿¬»ê °á°ú: %.0f\n", ptr[num-1](a,b));
	}	
}
