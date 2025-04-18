# moduleGenerator
moduleGenerator for shadps4 project

When adding new libraries to shadPS4:
- Add any new files to `CMakeLists.txt`
- Add a call to RegisterlibSce... in `src/core/libraries/libs.cpp`
- Add the generated library's logging class to `src/common/logging/filter.cpp` and `src/common/logging/types.h`
