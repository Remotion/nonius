// Nonius - C++ benchmarking tool
//
// Written in 2014 by Martinho Fernandes <martinho.fernandes@gmail.com>
//
// To the extent possible under law, the author(s) have dedicated all copyright and related
// and neighboring rights to this software to the public domain worldwide. This software is
// distributed without any warranty.
//
// You should have received a copy of the CC0 Public Domain Dedication along with this software.
// If not, see <http://creativecommons.org/publicdomain/zero/1.0/>

// Clocks

#ifndef NONIUS_CLOCK_HPP
#define NONIUS_CLOCK_HPP

#include <chrono>

namespace nonius {
    using default_clock = std::chrono::high_resolution_clock;
} // namespace nonius

#endif // NONIUS_CLOCK_HPP
