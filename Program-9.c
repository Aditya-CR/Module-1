//INPUT:3.45 6.56 4.78 8.65                                                                                                           
//OUTPUT : Midpoint : (4.12,7.60)
#include<stdio.h>

int main()
{
    float x1,x2,y1,y2,slope,; // correct the code
    //Enter the X Coordinate and Y coordinate of Endpoint-1(x1,y1) and Endpoint-2(x2,y2)
    scanf("%f%f%f%f");   // correct the code
    slope=(y2-y1)/(x2-x1);
    midX=(x1+x2)/2;
    midY=(y1+y2)/2;
    printf("Midpoint : (%.,%.)",midX,midY);  // correct the code : print the output with 2 decimal place precision
    return 0;
}
