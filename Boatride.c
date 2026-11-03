#include<stdio.h>
int main(){
    int ride;
    int adult;
    int children;


    int atod=100
    int survoday=150;
    int gangaarati=200;
    int compleatride=350;


    printf("enter your ride code");
    printf("how much adult:\n");
    printf("how much children:\n");
    scanf("%d", &ride);
    scanf("%d", &adult);
    scanf("%d", &children);
    if(ride>4){
        printf("invalid ride");
    }
else if(adult>5){
  int s=ride*100;
    printf("%d",s-s*10/100);

else if(ride<5){

    int p=ride*adult;
    printf("%d",p);

}
}
   
}