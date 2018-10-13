#ifndef TRIANGLE_H
#define TRIANGLE_H
namespace triangle {
struct parameters {
 double X,Y;
};
double compute_perimeter(parameters *ptr_x, parameters *ptr_y, parameters *ptr_z);
}
#endif // TRIANGLE_H
