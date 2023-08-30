#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main(){
	int a=3,b=2,c=4,d=8,x;
	a+=b*c;
	b-=c/b;
	printf("%d %d %d %d\n",a,b,c*=2*(a-c),d%=a);
	printf("x=%d\n",x=a>=c);
	system("pause");
  return 0;
}