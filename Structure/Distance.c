#include<stdio.h>
#include <math.h>
typedef struct {

int x;
int y;

} point;


float calDist(point p,point q){
    float d,ED;
    int dx,dy;
    dx=p.x-q.x;
    dy=p.y-q.y;
    d= dx*dx+ dy*dy;
    ED=sqrt(d);
    return ED;
}
int main(){
    point p,q;
    float d;
    printf("Enter first point:");
    scanf("%d",&p.x);
    scanf("%d",&p.y);
    printf("Enter second Point:");
    scanf("%d",&q.x);
    scanf("%d",&q.y);
    d=calDist(p,q);
    printf("Distance is %f",d);

}
