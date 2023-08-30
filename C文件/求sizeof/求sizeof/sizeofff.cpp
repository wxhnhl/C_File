#include<stdio.h>
#include<stdlib.h>
struct{
	int i;
	char c;
	float a;
}test;
int main(){
	//printf("整%d  字符%d  浮点%d  结构体%d\n",sizeof(test.i),sizeof(test.c),sizeof(test.a),sizeof(test));
	int a[3][4];
	for(int i=0;i<3;i++)
		for(int j=0;j<4;j++)
			printf("%d\n",a[i][j]);
	//printf("a=%d",*a[0]);
	//test.c='\0';
	//printf("%c\n",test.c);
	//printf("%llf",5);


	//int a[6],i;
	//for(int i=1;i<6;i++){
		//a[i]=9*(i-2+4*(i>3))%5;
		//printf("%2d",a[i]);
	//}
	system("pause");
}