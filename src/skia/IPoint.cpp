#include <pybind11/pybind11.h>
#include <skia.h>

namespace py = pybind11;

void initIPoint(py::module &m) {
py::class_<SkIPoint>(m, "IPoint");
}