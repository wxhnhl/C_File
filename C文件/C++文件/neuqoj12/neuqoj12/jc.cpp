#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main(){
  int n,m;
  while(scanf("%d %d",&n,&m)!=EOF){
	  scanf("%d %d",&n,&m);
	  int a;
	  a=4n-m;
	 int b;
	 b=m-2n;
    if(a<0||b<0||(a%2)!=0||(b%2)!=0)
    {printf("%s","NO answer");}
  else{printf("%d %d\n",(4n-m)/2,(m-2n)/2);}
}
  system("pause");
  return 0;
}