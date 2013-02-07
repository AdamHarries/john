#ifndef __OBJECT_H__
#define __OBJECT_H__

#include "material.h"
#include "ray.h"
#include "vector3.h"

using namespace std;

class Object
{
public:
    Object();
    ~Object();

    // mathematics functions, virtual as they are
    // unique to each type of object
    virtual pair<bool, double>  intersectionCheck(Ray& ray);
    virtual Vector3             surfaceNormal(Vector3& intersection);

    Material*   getMaterial();
    void        setMaterial(Material* material);

protected:
    Material*   m_material;

};

#endif