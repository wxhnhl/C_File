Status ListInsert_Sq(SqList &L,int i,Elemtype e){
 if(i<1||i>=L.length+1) return EROOR;
 if(L.length>=L.listsize){
 newbase = (ElemType *)realloc(L.elem,(L.listsize+LISTINCREMENT)*sizeof(ElemType));
 if(!newbase) exit(OVERFLOW);
 L.elem = newbase;
 L.listsize +=LISTINCREMENT;
 }
 q=&(L.elem{i-1});
 for(p=&(L.elem[L.length-1]);p>=q;--p) *(p+1)=*p;
 *q=e;
 ++L.length;
 return OK;
}//ListInsert_Sq