typedef struct {
	ElemType *elem;				//数据元素存储空间基址，建表时按实际长度分配，0号单元留空
	int length;					//表长度；
}SSTable;