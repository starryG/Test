#include <stdio.h>

void test (int &x){
    x = 1024;
    printf("test函数内部 x=%d\n",x);
}

int main(){
    int x = 1;
    printf("调用test前 x=%d\n",x);
    test (x);
    printf("调用test后 x=%d\n",x);
}
运行结果:
    调用test前 x=1
    test函数内部 x=1024
    调用test后 x=1024
//如果不用引用型参数, 则输出结果为
    调用test前 x=1
    test函数内部 x=1024
    调用test后 x=1
