#include <stdio.h>
#include<stdlib.h>
using namespace std;
typedef struct Student{
	char name[32];
	float score[3];
}Student;
int main(){
	Student stus[5];
	char na[32];
	float score;
	for(int i=0;i<5;i++){
		printf("������ѧ����������\n");
		scanf("%s",na);
		stus[i].name[32]=*na;
		for(int j=0;j<3;j++){
			printf("������ѧ���ĵ� %d �ųɼ�\n",j+1);
			scanf("%f",&score);
			stus[i].score[j]=score;
		}
	}
	float sum[3]={0};		float average[5]={0};
	for(int i=0;i<5;i++){
		for(int j=0;j<3;j++){
			sum[j]=sum[j]+stus[i].score[j];
			average[i]=average[i]+stus[i].score[j];
		}
		printf("��%d ��ѧ����ƽ���ɼ�Ϊ��%.2f\n",i+1,average[i]/3);
	}
	for(int i=0;i<3;i++)
		printf("�� %d �ſγ̵�ƽ���ɼ�Ϊ�� %.2f\n",i+1,sum[i]/5);
	system("pause");
}