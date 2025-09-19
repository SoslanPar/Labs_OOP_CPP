#include <iostream>
#include "box_capacity.h"

unsigned int box_capacity(unsigned int length_storage, unsigned int width_storage, unsigned int height_storage){
    unsigned int length_box, width_box, height_box, volume;
    length_box = length_storage * 3 / 4;
    width_box = width_storage * 3 / 4;
    height_box = height_storage * 3 / 4;
    volume = length_box * width_box * height_box;
    // std::cout << length_box << " " << width_box << " " << height_box << " " << volume << std::endl;
    return volume;
}