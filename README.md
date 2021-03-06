# ccmath
CCMATH is a mathematics library, coded in C, that contains functions for linear algebra, numerical integration, geometry and trigonometry, curve fitting, roots and optimization, Fourier analysis, simulation generation, statistics, special functions, sorts and searches, time series models, complex arithmetic, and high precision computations.CCMATH is a mathematics library, coded in C, that contains functions for linear algebra, numerical integration, geometry and trigonometry, curve fitting, roots and optimization, Fourier analysis, simulation generation, statistics, special functions, sorts and searches, time series models, complex arithmetic, and high precision computations.

This is a mirror of [FreeCode at SourceForge](http://freshmeat.sourceforge.net/projects/ccmath)

[http://freshmeat.sourceforge.net/projects/ccmath](http://freshmeat.sourceforge.net/projects/ccmath)


========================== CCMATH README ===============================


                    CCMATH: A Mathematics Library
                    -----------------------------
                          Version 2.2.0

                    developed and maintained by
                        Daniel A. Atkinson
                         <DanAtk@aol.com>

      This package contains the source and test code for the CCMATH
 mathematics library. The library is a collection of functions, coded in
 the C-language, that perform computations frequently encountered in
 scientific, mathematical, and statistical applications. Library functions
 are designed to exploit the efficiency and portability of C in such
 applications. The following areas are covered:

                       o Linear Algebra
                       o Numerical Integration
                       o Geometry and Trigonometry
                       o Curve Fitting
                       o Roots and Optimization
                       o Fourier Analysis
                       o Simulation Support
                       o Statistical Functions
                       o Special Functions
                       o Sorts and Searches
                       o Time Series Modeling
                       o Complex Arithmetic
                       o High Precision Arithmetic

     The library code may be freely redistributed under the terms of the
 GNU library public license (LGPL). The distribution directory contains a
 copy of this license. Note that CCMATH is provides AS IS, with NO WARRANTY,
 either expressed or implied.

     Version 2.2.0 incorporates some major upgrades of the library designed
 to facilitate its usability. First all function definitions have been
 upgraded to the modern ASCII standard. This was already used in the
 function declarations of the header file 'ccmath.h'. It enables compile
 time checking of the types of function arguments. The test functions
 have also been upgraded to support automatic comparison with sample
 outputs. This a simple test of each function does not require tedious
 comparison of printed numerical values. This is explained further in the
 TESTING file in the current directory.

     The 'manual' subdirectory contains documentation for each of the
 functions in the library. The introductory Chapter 'C00-intro' is
 recommended reading for all users. Each function is covered by a detailed
 function synopsis. Chapters of the manual are indexed with the name of
 the subdirectory containing the source code covered in the chapter.

     Compilation and installation are covered in the INSTALL file in the
 current directory. This should be fairly simple, but you will need to know
 the answers to:

             1) Is the target processor Intel compatible?
             2) If not, is the byte order big-endian or not?

     Each source code directory has a 'test' subdirectory with library
 test code. This test code serves dual roles, since it permits tests of
 library functions and it provides an example of how the function is used.
 I strongly recommend inspection of the test code for functions you intend
 to use. The modules tested by a test function are identified in the test
 function's header, and a sample of test output is given in a trailing
 comment.

     The 'benchmk' directory contains drivers for timing the execution
 of many library functions. The file 'linux_p2.tim' in this directory
 presents results that you can compare with times obtained on your
 hardware.

     Problems encountered with CCMATH, comments on your use of the
 package, or timing data you would like to share can be sent to me at
 <DanAtk@aol.com>. To properly address problems I will need the following
 information:

     a. The compiler used  to compile the package, and the target
        processor.
     b. Compiler options used if they differ from the defaults in
        'mklibs.sh'.
     c. Output from runs of test code for the suspect functions, if it
        differs from the sample output in this distribution.
     d. If possible, source code for the program where the problem was
        discovered.
