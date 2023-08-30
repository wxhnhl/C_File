#include<stdarg.h>
#define MAX_ARRAY_DIM 8
typedef struct {
	ElemType *base;			//数组元素基址，由InitArray分配
	int dim;				//数组维数
	int *bounds;			//数组维界基址，由InitArray分配
	int *constants;			//数组映像函数常量基址，由InitArray分配
}Array;