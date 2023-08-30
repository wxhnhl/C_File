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
		printf("请输入学生的姓名：\n");
		scanf("%s",na);
		stus[i].name[32]=*na;
		for(int j=0;j<3;j++){
			printf("请输入学生的第 %d 门成绩\n",j+1);
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
		printf("第%d 个学生的平均成绩为：%.2f\n",i+1,average[i]/3);
	}
	for(int i=0;i<3;i++)
		printf("第 %d 门课程的平均成绩为： %.2f\n",i+1,sum[i]/5);
	system("pause");
}