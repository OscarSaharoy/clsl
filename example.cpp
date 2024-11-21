#include <iostream>
#include "clsl.h"

int main() {
    // create a vec3
    vec3 v = vec3(1);

    // modify the vec3
    v += vec3(1,2,3);
    v = v - pow(v, 3.);

    // print the vec3 to see the result
    std::cout << v << std::endl;
}
