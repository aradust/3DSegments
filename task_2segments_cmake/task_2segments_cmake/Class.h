#pragma once
#include <iostream>
#include <cmath>
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
class Segment3D
{
private:
    Vector3D start;
    Vector3D end;
public:
    Segment3D();
    ~Segment3D();
    const Vector3D& get_start() const;
     const Vector3D& get_end() const;
    Segment3D(const Vector3D& segm_1, const Vector3D& segm_2);
    Segment3D(const Segment3D& segm);
    friend std::ostream& operator<<(std::ostream& os_2, const Segment3D& segm);
};