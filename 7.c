#include<stdio.h>
int search(int a,int b[],int c);
int main()
{	int x,loc;
	int a[]={0,2,5,64,34,26,82,62,24,8};
	printf("请输入一个数字：");
	scanf("%d",&x);
	loc=search(x,a,sizeof(a)/sizeof(a[0]));
	if(loc!=-1){
		printf("%d在第%d个位置上\n",x,loc);
	}else{
		printf("%d不存在\n",x);
	}
	return 0;
}
int search(int key,int a[],int length)
{
	int ret=-1;
	int i=0;
	for(i=0;i<length;i++)
	{
		if(key==a[i]){
			ret=i;
			break;
		}
	}
	return ret;
}
