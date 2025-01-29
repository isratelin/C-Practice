#include <stdio.h>

int main(){
    float pi=3.1416, area,r, circumf;
    printf("please input your radius:\t");
    scanf("%f", &r);
    area=pi*r*r;
    circumf=2*pi*r;
    printf("%f %f", area, circumf);

}
