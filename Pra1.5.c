#include <stdio.h>
int main(){
    int fahr;
    for (fahr = 300;fahr >= 0; fahr = fahr - 20) /*fahr不能是<=300,因为它一直小于300*/
        printf("%3d %6.1f\n", fahr,(5.0/9.0)*(fahr-32));
    return 0;
}