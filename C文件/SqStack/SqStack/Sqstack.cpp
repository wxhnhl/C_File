#define STACK_INIT_SIZE 100				//存储空间初始分配量
#define STACKINCREMENT 10				//存储空间分配增量
typedef struct{
	SElemType *base;					//在构造栈之前和销毁栈之后，base的值为NULL
	SElemType *top;						//栈顶指针
	int stacksize;
}SqStack;
