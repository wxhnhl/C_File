#include<stdarg.h>
#define MAX_ARRAY_DIM 8
typedef struct {
	ElemType *base;			//����Ԫ�ػ�ַ����InitArray����
	int dim;				//����ά��
	int *bounds;			//����ά���ַ����InitArray����
	int *constants;			//����ӳ����������ַ����InitArray����
}Array;