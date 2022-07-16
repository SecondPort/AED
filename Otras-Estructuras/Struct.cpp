#include <iostream>

void StructDatas(){
    struct PERSON
    {
        int age;
        float height;
    };

    PERSON dad;
    dad.age = 30;
    dad.height = 1.8;
    std::cout << "Edad papa: " << dad.age << std::endl;
    std::cout << "Altura papa: " << dad.height << std::endl;
}

int main(){
    StructDatas();
    return 0;
}