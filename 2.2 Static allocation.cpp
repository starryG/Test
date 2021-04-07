#include<stdio.h>
#define MaxSize 10
typedef struct{
    int data[MaxSize];
    int length;
}SqList;

//初始化一个顺序表
void InitList(SqList &L){
     for(int i=0; i<MaxSize; i++)
        L.data[i]=0; //将所有数据元素设置为默认初始值
    L.length=0; 
}

int main(){
    SqList L;
    InitList(L);
    for(int i=0; i<MaxSize; i++)
        printf("data[%d]=%d\n",i,L.data[i]);
    return 0;
}