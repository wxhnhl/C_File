#define STACK_INIT_SIZE 100				//�洢�ռ��ʼ������
#define STACKINCREMENT 10				//�洢�ռ��������
typedef struct{
	SElemType *base;					//�ڹ���ջ֮ǰ������ջ֮��base��ֵΪNULL
	SElemType *top;						//ջ��ָ��
	int stacksize;
}SqStack;
