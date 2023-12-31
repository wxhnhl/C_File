//-------二叉树的二叉线索存储表示----
typedef enum PointerTag{Link,Thread};		//Link==0：指针，Thread==1:线索；
typedef struct BiThrNode{
	TElemType  data;
	struct BiThrNode *lchild,*rchild;		//左右孩子指针
	PointerTag LTag,RTag;					//左右标志
}BiThrNode,*BiThrTree; 