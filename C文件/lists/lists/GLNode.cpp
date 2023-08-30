//------广义表的扩展线性链表存储表示-------
typedef enum{ATOM,LIST}ElemTag;
typedef struct GLNode{		//ATOM==0:原子，LIST==1:子表；
	ElemTag tag;			//公共部分，用于区分原子结点和表结点
	union{
		AtomType atom;		//原子结点的值域
		struct GLNode *hp;	//表结点的表头指针
	}；
		struct GLNode *tp;	//相当于线性链表的NEXT,指向下一个元素结点
}*GList						//扩展的线性链表