#include "Class_3.h"
Segment3D::Segment3D() {//конструктор по умолчанию
    start;
    end;

}
Segment3D:: ~Segment3D() = default;//дефолтный деструктор
const Vector3D& Segment3D::get_start() const {//функции для получения значения приватных полей (start, end)
    return start;
}
const Vector3D& Segment3D::get_end() const {
    return end;
}
Segment3D::Segment3D(const Vector3D& segm_1, const Vector3D& segm_2) {//создаём объект класса Segment3D на основе векторов
    start = segm_1;
    end = segm_2;
}
Segment3D::Segment3D(const Segment3D& segm) {//конструктор копирования
    start = segm.start;
    end = segm.end;
}

std::ostream& operator<<(std::ostream& os_2, const Segment3D& segm) {
    os_2 << "Segment" << " " << "start:" << " " << segm.start << " " << "end : " << " " << segm.end << std::endl; // для печати объекта класса Segment3D
    return os_2;
}