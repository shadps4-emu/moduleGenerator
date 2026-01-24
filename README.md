# moduleGenerator
moduleGenerator for shadps4 project

To get started, clone the repository recursively:
```bash
git clone --recursive https://github.com/shadPS4/moduleGenerator.git
```

To build the project, run:
```bash
cmake -S . -B build/ -DCMAKE_C_COMPILER=clang -DCMAKE_CXX_COMPILER=clang++
cmake --build ./build
```

If you want to make stubs for a library, add the library name to the `main.cpp` file

When adding new libraries to shadPS4:
- Add any new files to `CMakeLists.txt`
- Add a call to the library's RegisterLib in `src/core/libraries/libs.cpp`
- Add the generated library's logging class to `src/common/logging/filter.cpp` and `src/common/logging/types.h`
