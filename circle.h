#ifndef CIRCLE_H
#define CIRCLE_H
namespace circle {
struct parameters {
 double X,Y,r;
};
double compute_perimeter(parameters *ptr_x, parameters *ptr_y);
}
#endif // CIRCLE_H
