#define LIST_INIT_SIZE 100
#define LISTINCREMENT 10
typedef struct{
	ElemType * elem;
	int length;
	int listsize;
}Sqlist;