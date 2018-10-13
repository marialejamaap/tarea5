#include "main1.h"
#include "triangle.h"
namespace triangle {
double compute_perimeter(parameters *ptr_x, parameters *ptr_y, parameters *ptr_z){
 double distance1,distance2,distance3;
 distance1 = sqrt((ptr_x->X - ptr_y->X) * (ptr_x->X - ptr_y->X) + (ptr_x->Y-ptr_y->Y) *(ptr_x->Y-ptr_y->Y));
  distance2 = sqrt((ptr_x->X - ptr_z->X) * (ptr_x->X - ptr_z->X) + (ptr_x->Y-ptr_z->Y) *(ptr_x->Y-ptr_z->Y));
   distance3 = sqrt((ptr_z->X - ptr_y->X) * (ptr_z->X - ptr_y->X) + (ptr_z->Y-ptr_y->Y) *(ptr_z->Y-ptr_y->Y));

    return distance1+distance2+distance3;

}}
