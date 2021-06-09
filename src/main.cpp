// Copyright 2021 Peter Dimov
// Distributed under the Boost Software License, Version 1.0.
// https://www.boost.org/LICENSE_1_0.txt

#include <boost/system/error_code.hpp>
#include <iostream>

int main()
{
    boost::system::error_code ec( 5, boost::system::system_category() );
    std::cout << "Error code '" << ec << "' corresponds to the message '" << ec.message() << "'\n";
}
