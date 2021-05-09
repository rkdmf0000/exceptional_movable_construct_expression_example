#include <iostream>


//class exa
class test_class {

public:
    test_class(void) {
        std::cout << "cst class" << '\n';
    };
    test_class(const test_class& other) {
        std::cout << "cst class2 : " << &other <<  '\n';
    };
    test_class(const test_class&& other) {
        std::cout << "cst class3 : " << &other << '\n';
    };
    test_class(test_class&& t_ref) {
        std::cout << "cst class by reffff : " << &t_ref << '\n';
    };
    ~test_class(){
        std::cout << "de-cst class" << '\n';
    };
};

//struct exa
struct test_struct {
public:
    test_struct() {
        std::cout << "cst struct" << '\n';
    };
    test_struct(test_struct&& t_ref) {

    };
    ~test_struct() {
        std::cout << "de-cst struct" << '\n';
    };
};


int main() {

    std::cout << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl ;

    test_class dummy_class_a;
    std::cout << &dummy_class_a << '\n';

    test_class dummy_class_b = std::move(dummy_class_a);
    std::cout << &dummy_class_b << '\n';

    //test_struct dummy_struct_a();
    //test_class dummy_class_b;
    //test_struct dummy_struct_b;

    std::cout << "program over" << '\n';
    return 0;
}
