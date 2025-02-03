#include "Class_2.h"
Vector3D::Vector3D() { //конструктор по умолчанию
    X = 0;
    Y = 0;
    Z = 0;
}
Vector3D::~Vector3D() = default; //дефолтный деструктор
Vector3D::Vector3D(const Vector3D& vec) { //конструктор копировани€
    X = vec.X;
    Y = vec.Y;
    Z = vec.Z;
}
Vector3D::Vector3D(double x, double y, double z) { //создаЄм вектор по трЄм точкам
    X = x;
    Y = y;
    Z = z;
}
bool Vector3D::is_Near(const Vector3D& vec) { //функци€ "близости двух векторов", то есть если разность между точками векторов меньше eps, считаем, что 
    return ((fabs(X - vec.X) < eps) && (fabs(Y - vec.Y) < eps) && (fabs(Z - vec.Z) < eps)); // оба вектора €вл€ютс€ одним объектом
}
Vector3D Vector3D:: operator + (const Vector3D& vec) const //перегружаем операторы +, -, домножение на скал€р
{
    return Vector3D{ X + vec.X,Y + vec.Y,Z + vec.Z };
}
Vector3D Vector3D:: operator - (const Vector3D& vec) const
{
    return Vector3D{ X - vec.X,Y - vec.Y,Z - vec.Z };
}
Vector3D Vector3D:: operator * (const double a) const
{
    return Vector3D{ X * a,Y * a,Z * a };
}
double Vector3D::D(const Vector3D& vec_1, const Vector3D& vec_2, const Vector3D& vec_3, const Vector3D& vec_4) {//функци€, необходима€ дл€ реализации алгоритма
    return ((vec_1.X - vec_2.X) * (vec_3.X - vec_4.X) + (vec_1.Y - vec_2.Y) * (vec_3.Y - vec_4.Y) + (vec_1.Z - vec_2.Z) * (vec_3.Z - vec_4.Z));//(см. func.cpp)
}
std::ostream& operator<<(std::ostream& os_1, const Vector3D& vec) {// дл€ печати объекта класса Vector3D
    os_1 << "(" << vec.X << ", " << vec.Y << ", " << vec.Z << ")" << std::endl;
    return os_1;
}