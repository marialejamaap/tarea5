#include <main1.h>
#include <circle.h>

namespace circle {
double compute_perimeter(parameters *ptr_x, parameters *ptr_y){
   parameters radius= *ptr_x;
    double perimeter1;
    double PI=3.1416;
   perimeter1=2*PI*(radius.r);

    return perimeter1;
}}
