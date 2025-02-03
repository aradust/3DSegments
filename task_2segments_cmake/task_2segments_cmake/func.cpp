#include "func.h"
#include <cstdlib>
Vector3D intersect(const Segment3D& segm_1, const Segment3D& segm_2) {
    Vector3D null_vector;
    Vector3D vec_1 = segm_1.get_start(); //для удобства работы перейдем от отрезков к векторам 
    Vector3D vec_2 = segm_1.get_end();
    Vector3D vec_3 = segm_2.get_start();
    Vector3D vec_4 = segm_2.get_end();
    if ((vec_1.is_Near(vec_2)) || (vec_3.is_Near(vec_4))) { //проверка на то, что начало и конец отрезка не равны. Если они равны, то программа завершает
        std::cout << "invalid values" << std::endl; //работу с кодом 1
        exit(1);
    }
    if (((vec_1.is_Near(vec_3)) || (vec_1.is_Near(vec_4))) && !(((vec_2.is_Near(vec_3))) || (vec_2.is_Near(vec_4)))) {
        std::cout << "Segments intersect in " << vec_1 << std::endl;
        return vec_1; //проверка на то, пересекаются ли отрезки в крайних точках 
    }
    if (((vec_2.is_Near(vec_3)) || (vec_2.is_Near(vec_4))) && !(((vec_1.is_Near(vec_3))) || (vec_1.is_Near(vec_4)))) {
        std::cout << "Segments intersect in " << vec_2 << std::endl;
        return vec_2;//проверка на то, пересекаются ли отрезки в крайних точках 
    }
    if (((vec_1.is_Near(vec_3)) || (vec_1.is_Near(vec_4))) && (((vec_2.is_Near(vec_3))) || (vec_2.is_Near(vec_4)))) {
        std::cout << "Segments match " << std::endl;//проверка на совпадение отрезков
        return vec_2;
    }
    else { //если все проверки пройдены, то реализуем алгоритм поиска кратчайшего расстояния между двумя трёхмерными отрезками
        double D_1343 = Vector3D::D(vec_1, vec_3, vec_4, vec_3);
        double D_4321 = Vector3D::D(vec_4, vec_3, vec_2, vec_1);
        double D_1321 = Vector3D::D(vec_1, vec_3, vec_2, vec_1);
        double D_4343 = Vector3D::D(vec_4, vec_3, vec_4, vec_3);
        double D_2121 = Vector3D::D(vec_2, vec_1, vec_2, vec_1);
        double mua = (D_1343 * D_4321 - D_1321 * D_4343) / (D_2121 * D_4343 - D_4321 * D_4321);
        double mub = (D_1343 + mua * D_4321) / D_4343;
        Vector3D Pa = vec_1 + (vec_2 - vec_1) * mua;
        Vector3D Pb = vec_3 + (vec_4 - vec_3) * mub;
        if (Pa.is_Near(Pb)) {
            std::cout << "Segments intersect in " << Pa << std::endl; //условие, если находим точку пересечения 
            return Pa;
        }
        else {
            std::cout << "Segments no intersect" << std::endl; //условие, если отрезки не пересекаются 
        }

    }
}