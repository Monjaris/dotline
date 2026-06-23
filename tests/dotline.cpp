#include "dotline.hpp"

int main()
{
    std::string s = "abc";
    dotl::prompt("->");
    dotl::read_string(s);
    std::cout << std::endl << s << std::endl;
}
