#include <iostream>
#include "box_capacity.h"
#include "box_capacity.cpp"

int main(){
    unsigned int length_storage, width_storage, height_storage, volume;
    std::cout << "enter length_storage, width_storage, height_storage\n";
    std::cin >> length_storage >> width_storage >> height_storage;

    volume = box_capacity(length_storage, width_storage, height_storage);

    std::cout << "volume: " << volume << std::endl;
    return 0;
}
