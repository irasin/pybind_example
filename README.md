# Usage



```bash
git submodule update --init

cmake -B build
cmake --build build


cd build
python3 -c "import pybind_test; pybind_test.hello('world')"
python3 -c "import pybind_test; print(pybind_test.add(1, 2))"
```