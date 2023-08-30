typedef struct QNode{
	QElemType  data;
	struct	QNode *next;
}QNode,*QueuePtr;

typedef struct{
	QueuePtr front;		//队头指针
	QueuePtr rear;		//队尾指针
}LinkQueue;
