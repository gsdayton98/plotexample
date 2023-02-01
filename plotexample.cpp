// -*- mode: c++ -*-
////
// @copyright 2023$
//  Glen Dayton, new account
//
//  Main application entry point
//  
//  @param argc The number of elements in the argv array
//  @param argv The command line arguments passed to the
//              application
//  
//  @return Completion code, typically 0 for success

#include <cstdlib>
#include <iostream>
#include <stdexcept>
#include <matplot/matplot.h>

int main(int argc, char *argv[]) {
    int returnCode = EXIT_FAILURE;
    try {
        using namespace matplot;
        std::vector<double> t = iota(0, pi / 50, 10 * pi);
        std::vector<double> st = transform(t, [](auto x) { return sin(x); });
        std::vector<double> ct = transform(t, [](auto x) { return cos(x); });
        auto l = plot3(st, ct, t);
        show();

        // TODO: Add application code here
        returnCode = EXIT_SUCCESS;
    } catch (const std::exception &ex) {
        std::cerr << argv[0] << ": Exception: " << ex.what() << std::endl;
    }
    return returnCode;
}

