#include <stdio.h>

int main() {/*Вывести все числа из промежутка. 
При этом чтобы каждое число выводилось столько раз, каково его значение. Например, число 55 должно выводиться 55 раз*/
int A,B,c,d;
scanf("%d%d",&A,&B);
for (c=A;c<=B;c++){
    for (d=1;d<=c;d++)
    printf ("%4d",c);
}
    
    return 0;
}
