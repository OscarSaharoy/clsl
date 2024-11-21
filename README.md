# clsl

This project is a C++ header file called `clsl.h` that you can use to add glsl language features to C++. It lets you copy-paste your glsl code into a C++ file and run it on the CPU, allowing you to print intermediate values and debug your shaders much more easily :)

# Example

This is a small example file to show how it works. I included clsl.h at the top, along with iostream so I can print out results. I can create a vec3 just like in glsl, do calculations and the print it out to see the result.

```C++
# example.cpp

#include <iostream>
#include "clsl.h"                                                                                                                     int main() {                                                           // create a vec3
    vec3 v = vec3(1);                                                                                                                     // modify the vec3
    v += vec3(1,2,3);
    v = v - pow(v, 3.);
                                                                       // print the vec3 to see the result
    std::cout << v << std::endl;
}
```

So when I compile and run the code, it prints out a vec3 and I can see if its what I expect and start debugging if not :)

```bash
[oscar@tmx ~/projects/clsl] $ g++ example.cpp
[oscar@tmx ~/projects/clsl] $ ./a.out
vec3(-6, -24, -60)
```

You can add more complex code including function definiting etc so you can bring your shader code in and debug it easily. Not all the glsl types and functions are added yet but requests and PRs are welcome!
