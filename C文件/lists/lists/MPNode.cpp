typedef struct MPNode{
	ElemTag tag;			//区分原子结点和表结点
	int exp;				//指数域
	union{
			float coef;		//系数域
			struct MPNode *hp;	//表结点的表头指针
	};
	struct MPNode *tp;			//相当于线性链表的next,指向下一个元素结点
}*MPList;						//m元多项式广义表类型


