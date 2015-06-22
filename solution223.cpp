#include "solution223.h"
#include <cmath>
using namespace std;
Solution223::Solution223()
{
}

int Solution223::computeArea(int A, int B, int C, int D, int E, int F, int G, int H)
{
    int squre1,squre2;

    int heigh1 = abs(D - B);
    int width1 = abs(A - C);
    int heigh2 = abs(H - F);
    int width2 = abs(E - G);

    squre1 = heigh1 * width1;
    squre2 = heigh2 * width2;

    if(A > E && B > F && C < G && D < H)
        return squre2;
    if(A < E && B < F && C > G && D > H)
        return squre1;

    int ltx,lty,rbx,rby;
    ltx = A < E ? A : E;
    lty = D < H ? H : D;
    rbx = C < G ? G : C;
    rby = B < F ? B : F;

    int lbx,lby,rtx,rty;
    lbx = ltx;
    lby = rby;
    rtx = rbx;
    rty = lty;

    int x1,y1,x2,y2;
    x1 = A < E ? E : A;
    y1 = B < F ? F : B;
    x2 = C < G ? C : G;
    y2 = H < D ? H : D;

    int h = (y2 - y1) > 0 ? (y2 - y1):0;
    int w = (x2 - x1) > 0 ? (x2 - x1):0;

    return squre2 + squre1 - (h * w);

//    int squre3,squre4;
//    squre3 = abs(x1 - lbx) * abs(y1 - lby);
//    squre4 = abs(rtx - x2) * abs(rty - y2);



//    int heigh = abs(rbx - ltx);
//    int width = abs(rby - lty);

//    sumqure = width * heigh;



//    int res = (squre1 + squre2) - (sumqure - squre3 - squre4);
//    if(res >= 0)
//        return res;
//    else
//        return 0;
}
