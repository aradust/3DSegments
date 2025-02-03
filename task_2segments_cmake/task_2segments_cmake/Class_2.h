#pragma once
#include <fstream>
const double eps = 1e-10; //задаЄм точность
//в этом файле объ€влени€ 
//в Class.cpp определени€

class Vector3D
{
private:
    double X;
    double Y;
    double Z;
public:
    Vector3D();
    ~Vector3D();
    Vector3D(const Vector3D& vec);
    Vector3D(double x, double y, double z);
    bool is_Near(const Vector3D& vec);
    Vector3D operator + (const Vector3D& vec) const;
    Vector3D operator - (const Vector3D& vec) const;
    Vector3D operator * (const double a) const;
    static double D(const Vector3D& vec_1, const Vector3D& vec_2, const Vector3D& vec_3, const Vector3D& vec_4);
    friend std::ostream& operator<<(std::ostream& os_1, const Vector3D& vec);
};