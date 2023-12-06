#include <pybind11/eigen.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include "integrator.hpp"

namespace py = pybind11;

PYBIND11_MODULE(_core, m) {
  /// ... Fill me in!
  m.doc() = "binding HarmonicOscillator"

            py::class_<HarmonicOscillator>(m, "HarmonicOscillator")
                .def(py::init<>())
                .def("integrate", &HarmonicOscillator::integrate)
}
