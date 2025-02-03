#pragma once
#include "Class_2.h"
#include <iostream>
#include <cmath>

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