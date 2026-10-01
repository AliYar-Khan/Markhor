# Markhor Engine

Markhor is a C++23 game engine built with CMake. The project is split into two parts:

- **Markhor** — the engine itself, built as a shared library (`libMarkhor.so`).
- **Sandbox** — a sample application that links against the engine and runs it.

## Project Structure

```
Markhor/
├── CMakeLists.txt          # Top-level CMake configuration
├── Markhor/                # Engine library
│   ├── CMakeLists.txt
│   ├── include/Markhor/    # Public headers (Application.h)
│   └── src/Markhor/        # Engine sources (Application.cpp)
└── Sandbox/                # Sample application
    ├── CMakeLists.txt
    └── src/                # Sandbox entry point (SandboxApp.cpp)
```

## Requirements

- CMake 3.20+
- A C++23 capable compiler (GCC 13+, Clang 17+, or MSVC 17.7+)
- Ninja generator

## Building

### Debug

```bash
cmake -S . -B build/debug \
    -G Ninja \
    -DCMAKE_BUILD_TYPE=Debug

cmake --build build/debug
```

### Release

```bash
cmake -S . -B build/release \
    -G Ninja \
    -DCMAKE_BUILD_TYPE=Release

cmake --build build/release
```

## Running

After building, the Sandbox executable is located in the build directory:

```bash
# Debug
./build/debug/Sandbox/Sandbox

# Release
./build/release/Sandbox/Sandbox
```

Expected output:

```
Markhor Engine initialized
Markhor Engine running
```

## Usage

Include the engine headers and link against the `Markhor` target:

```cpp
#include <Markhor/Application.h>

int main()
{
    Markhor::Application app;
    app.Run();
    return 0;
}
```

```cmake
target_link_libraries(YourApp PRIVATE Markhor)
```
