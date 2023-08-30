//--------二叉树的顺序存储表示
#define MAX_TREE_SIZE 100							//二叉树的最大结点数
typedef TElemType SqBiTree[MAX_TREE_SIZE]	100					//0号单元存储根结点	
SqBiTree bt;



//--------二叉树的二叉链表存储表示
typedef	struct BiTNode{
	TElemType data;
	struct BiTNode *lchild,*rchild;			//左右孩子指针
}BiTNode,*BiTree;