#include <iostream>
/*
 * In this file, we investigated const pointers and pointers point to const.
 */
int main() {

    int x = 10;
    int y = 20;
    /* 1. Pointers point to const */
    const int *ptrc = &x;
    std::cout << (*ptrc) << std::endl;
    /* As ptrc is a pointer points to const int, we can not change the value
     * of the address it points to .
     * For example, we cannot do the following assignment.
     *
     *              (*ptrc) = 20;
     *
     * However, we can chang the value of ptrc itself.
     * For example, we can point ptrc to another variable.
     *
     */
    ptrc = &y;
    std::cout << (*ptrc) << std::endl;

    /* 2. Const Pointers */
    int* const cptr = &x;
    /*
     * Here, cptr is a pointer "const" points to a variable, so we can
     * not change the address it points to. For example, the following
     * assignment is invalid.
     *
     * cptr = &y;
     *
     * However, we can change the value of the address it points to.
     */
    std::cout << (*cptr) << std::endl;
    *cptr = 20;
    std::cout << (*cptr) << std::endl;

    /* Here is a const pointer points to a const.
     * Can we change the value of the address it points to?
     * Or can we change the address it points to?
     *
     * */
    const int* const cptrc = &x;

    return 0;
}