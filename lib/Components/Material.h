#ifndef MATERIAL_H
#define MATERIAL_H

enum class Material_Type{
    stone,
    air,
    grass
};

struct Material
{
    Material(int id, Material_Type material_type);
    int id;
    Material_Type material_type;
};

#endif