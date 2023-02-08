#define BOOST_TEST_MODULE TEST_NAME
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_CASE( case0 ) {
    BOOST_TEST( 6 == 6 );
}

BOOST_AUTO_TEST_CASE( case1 ) {
    BOOST_TEST( 1 == 1 );
}