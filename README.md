# CS510 CW 11

**Author(s):** **Seong and Kynan**

[![Build Status](https://travis-ci.org/chapman-cs510-2017f/cw-11-seongkynan.svg?branch=master)](https://travis-ci.org/chapman-cs510-2017f/cw-11-seongkynan)

## Specification

**Note: Remember this is a C project.**

Complete the following exercises, saving your solutions in the indicated files. 

1. Recall the following references, which will still be useful throughout the rest of the course.
    * [Learn C in Y Minutes](https://learnxinyminutes.com/docs/c/)
    * [C Cheat Sheet](https://www.cheatography.com/ashlyn-black/cheat-sheets/c-reference/)
    * [C Programming Wikibook](https://en.wikibooks.org/wiki/C_Programming)
    * [Learn Make in Y Minutes](https://learnxinyminutes.com/docs/make/)
1. Examine the source code in ```src/matrix``` carefully. Finish coding the implementation.
    1. In a Jupyter notebook ```Matrix.ipynb```, describe how the ```MATRIX``` type is defined and how it works in detail. Explain in particular the difference between "row-major ordering" and "column-major ordering" for multidimensional arrays, and indicate which is the default convention in C. (Is it the same convention as in Python?)
    1. Explain how you could force C to use the non-default array ordering if desired.
    1. Make sure that ```test_matrix``` in the ```test/``` folder compiles and runs correctly after you are finished implementing ```MATRIX```.
1. Examine the source code in ```src/stack``` carefully. Finish coding the implementation.
    1. Add comments that explain in the source code what each line is doing, to make sure you understand everything.
    1. Implement the print functions in a sensible way.
    1. In a Jupyter notebook ```Stack.ipynb```, describe how the ```STACK``` type is defined and how it works in detail. Explain in particular the various use of pointers throughout. Why is ```STACK``` itself defined as a pointer to a struct?
    1. Make sure that ```test_struct``` in the ```test/``` folder compiles and runs correctly after you are finished implementing ```STRUCT```.


## Assessment

Analyze in this section what you found useful about this assignment in your own words. Include any lingering questions or comments that you may have.

1. **It was very helpful to create an multi-demensional array type which is not implemented in C lanaguage. The concept of a pointer is critically important in our practice of a row-major ordering, because matrix array data sit linearly and sequentially in a memory storage.**
2. **It was helpful to learn linked data structure in the practice of stack. Particularly, managing stack elements recursively using a pointer head in a struct shows how C language can be expanded to a more complex tool.**

## Honor Pledge

I pledge that all the work in this repository is my own with only the following exceptions:

* Content of starter files supplied by the instructor;
* Code borrowed from another source, documented with correct attribution in the code and summarized here.

Signed,

**Seong and Kynan**
