#include<stdio.h>
#include<stdlib.h>
using namespace std;
//char a[5];
//int a[3][4];

//struct {
		//int weight;
		//float height;
		//char w;
	//}student;
#define STRING "\"OK!\""
int main(){
	//FILE *fp;
	//fp=fopen("filetest1","w");
	//return 0;
	//int a;
	
	FILE *fp;
	fp=fopen("wxhnhl520.txt","r");
	return 0;
	//int a;
	//int x,y;

	//scanf("%d %d %d",&x,&y,&z);
	//x=y=1;
	//if(x!=y)
		//scanf("%d",&x);
	//else scanf("%d",&y);
	//printf("%d",y);
	//++x||++y&&++z;
	//printf("x=%dy=%dz=%d",x,y,z);

	//printf("x+y+z=%d",x+y+z);
	//int b=33;
	//putchar(65);
	//printf("输出%c字符为%c得瑟%c得瑟",'\n','\r','\0');
	//printf("%c",'\040');
	
	//printf("%d",a[0][2]);

	//int i;
	//for(i=1;i<=5;i++)
		//switch(i%5){
		//case 0:printf("*"); break;
		//case 1:printf("#"); break;
		
		//case 2:printf("&");
		//default:printf(" ");
	//}
	//printf("\n");
	//printf("%d",22%10);


	//int a[6],i;
	//for(i=1;i<6;i++){
		//a[i]=9*(i-2+4*(i>3))%5;
		//printf("%2d",a[i]);
	//}
	//gets("wxh");
	//printf("\n");
	//putchar('w');
	//puts("wxh");

	//char a[6]={'0','0','0','0','0','0'};
	//char b[6]={'0','0','0','0','0','0'};
	//if(a==b)
		//printf("相等");
	//else printf("no");

	
	//printf("宽度为%d高度为%fwxh%c",student.weight,student.height,student.w);

	//char a1[5],a2[5],a3[5],a4[5];
	//scanf("%s%s",a1,a2);   gets(a3);
	//gets(a4); puts(a1); puts(a2); puts(a3); puts(a4);


	//char str[]="SSSWLTA",c;
	//int k;
	//for(k=2;(c=str[k])!='\0';k++)
	//{
		//switch(c){
		//case 'I':++k;break;
		//case 'L':continue;
		//default:putchar(c);continue;
		//}
		//putchar('*');
	//}
	//printf("\t");
	//printf("%s\n",STRING);

	struct s{
		int i1;
		struct s *i2;
	};
	static struct s a[3]={1,&a[1],2,&a[2],3,&a[0]};
	static struct s *ptr;
	ptr=&a[1];
	//printf("%d\n",ptr->i1++);
	//printf("%d\n",ptr++ ->i1);
	//printf("%d\n",++ptr->i1);
	printf("%d\n",++(ptr->i1));
	//printf("%d\n",*ptr->i1);
	system("pause");
}