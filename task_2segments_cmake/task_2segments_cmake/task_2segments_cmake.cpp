#include "func.h"
int main()
{
    Vector3D vector_1(0, 0, 0); //создаём вектора
    Vector3D vector_2(1, 1, 1);
    Vector3D vector_3(0, 0, 0);
    Vector3D vector_4(2, 2, 2);
    Segment3D segm_1(vector_1, vector_2);//создаём отрезки по векторам
    Segment3D segm_2(vector_3, vector_4);
    intersect(segm_1, segm_2); 
	
}
