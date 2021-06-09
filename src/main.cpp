#include <boost/system/error_code.hpp>
#include <iostream>

int main()
{
    boost::system::error_code ec( 5, boost::system::system_category() );
    std::cout << "Error code '" << ec << "' corresponds to the message '" << ec.message() << "'\n";
}
