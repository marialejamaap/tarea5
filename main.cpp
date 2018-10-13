#include "main1.h"
#include "square.h"
#include "triangle.h"
#include "circle.h"


using namespace std;



int main(){
    {
   using namespace square;
    struct parameters vertice1, vertice2,vertice3,vertice4;
    cout<<" Ingrese punto de coordenadas x,y  del vertice 1: ";
    cin>>vertice1.X>>vertice1.Y;
    cout<<" Ingrese punto de coordenadas x,y  del vertice 2: ";
    cin>>vertice2.X>>vertice2.Y;
    cout<<" Ingrese punto de coordenadas x,y  del vertice 3: ";
    cin>>vertice3.X>>vertice3.Y;
    cout<<" Ingrese punto de coordenadas x,y  del vertice 4: ";
    cin>>vertice4.X>>vertice4.Y;
    struct parameters *ptr_1=&vertice1;
    struct parameters *ptr_2=&vertice2;
    struct parameters *ptr_3=&vertice3;
    struct parameters *ptr_4=&vertice4;

    cout<<"\n\n The square perimeter is: ";
    cout<<compute_perimeter(ptr_1,ptr_2,ptr_3,ptr_4) <<endl;

    }

    {
   using namespace triangle;
    struct parameters vertice1, vertice2,vertice3;
    cout<<" Ingrese punto de coordenadas x,y  del vertice 1: ";
    cin>>vertice1.X>>vertice1.Y;
    cout<<" Ingrese punto de coordenadas x,y  del vertice 2: ";
    cin>>vertice2.X>>vertice2.Y;
    cout<<" Ingrese punto de coordenadas x,y  del vertice 3: ";
    cin>>vertice3.X>>vertice3.Y;

    struct parameters *ptr_1=&vertice1;
    struct parameters *ptr_2=&vertice2;
    struct parameters *ptr_3=&vertice3;

    cout<<"\n\n The triangle perimeter is: ";
    cout<<compute_perimeter(ptr_1,ptr_2,ptr_3) <<endl;

    }

    {
   using namespace circle;
    struct parameters radius, point;
    cout<<" Ingrese el radio del circulo: ";
    cin>>radius.r;
    cout<<" Ingrese punto de coordenadas x,y  del vertice 2: ";
    cin>>point.X>>point.Y;

    struct parameters *ptr_rad=&radius;
    struct parameters *ptr_point=&point;
    cout<<"\n\n The circle perimeter is: ";
    cout<<compute_perimeter(ptr_rad,ptr_point) <<endl;

    }

}

