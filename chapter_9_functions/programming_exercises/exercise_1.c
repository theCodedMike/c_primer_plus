//
// 1. Devise a function called min(x, y) that returns the smaller of two double values. Test the function with a simple driver.
//
// 1、设计一个函数min(x, y)，返回2个double类型值的较小值。在一个简单的驱动程序中测试该函数。
//

#include <assert.h>

double min(double x, double y);

__attribute__((unused))
void test_min(void) {
    assert(min(3, 4) == 3);
    assert(min(3.0, 4.0) == 3);
    assert(min(3.00, 3.01) == 3);
    assert(min(-3, 4) == -3);
    assert(min(3.00000, 3.000001) == 3);
    assert(min(3.012345, 3.0123456) == 3.012345);
}

double min(double x, double y) {
    return x < y ? x : y;
}