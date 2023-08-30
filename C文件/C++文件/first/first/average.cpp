#include <stdlib.h>
#include<iostream>
using namespace std;
void average(){
	int N;
	int count;
	float sum,average,number;
	sum=0;
	count=0;
	cin>>N;
	while(count<N){
	scanf("%f",&number);
	sum= sum+number;
	count++;}
	average = sum/N;
	printf("N=%d Sum=%f",N,sum);
	printf("Average = %f",average);
	system("pause");

}