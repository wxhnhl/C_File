#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main(){
	int a[3][4];
	int n=4;
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			a[i][j]=n++;
			printf("%3d",a[i][j]);
		}
		printf("\n");
	}
	int b[4][3];
	for(int i=0;i<4;i++){
		for (int j=0;j<3;j++){
		b[i][j]=a[j][i];
		printf("%3d",b[i][j]);}
		printf("\n");
	}
	system("pause");
	return 0;
	}