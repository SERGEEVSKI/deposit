#include <stdio.h>
#include <stdlib.h>
#include <ctest.h>
#include <Deposit.h>

// Tests for data_checking

CTEST(Check_data, test1)
{
	ASSERT_EQUAL(0, data_checking(10000, 365));
} 

CTEST(Check_data, test2)
{
        ASSERT_EQUAL(-1, data_checking(9999, 365));
}

CTEST(Check_data, test3)
{
        ASSERT_EQUAL(-1, data_checking(10000, 366));
}

CTEST(Check_data, test4)
{
        ASSERT_EQUAL(-1, data_checking(-1, 365));
}

CTEST(Check_data, test5)
{
        ASSERT_EQUAL(-1, data_checking(10000, -1));
}

CTEST(Check_data, test6)
{
        ASSERT_EQUAL(0, data_checking(-1, -1));
}

//Tests for calculation of contribution

CTEST(Calculating, test1)
{
        ASSERT_EQUAL(90000, calculation_of_contribution(100000, 30));
} 

CTEST(Calculating, test2)
{
        ASSERT_EQUAL(102000, calculation_of_contribution(100000, 31));
}

CTEST(Calculating, test3)
{
        ASSERT_EQUAL(102000, calculation_of_contribution(100000, 120));
}

CTEST(Calculating, test4)
{
        ASSERT_EQUAL(106000, calculation_of_contribution(100000, 121));
}

CTEST(Calculating, test5)
{
        ASSERT_EQUAL(106000, calculation_of_contribution(100000, 240));
}

CTEST(Calculating, test6)
{
        ASSERT_EQUAL(112000, calculation_of_contribution(100000, 241));
}

CTEST(Calculating, test7)
{
        ASSERT_EQUAL(90001, calculation_of_contribution(100001, 30));
} 

CTEST(Calculating, test8)
{
        ASSERT_EQUAL(103001, calculation_of_contribution(100001, 31));
}

CTEST(Calculating, test9)
{
        ASSERT_EQUAL(103001, calculation_of_contribution(100001, 120));
}

CTEST(Calculating, test10)
{
        ASSERT_EQUAL(108001, calculation_of_contribution(100001, 121));
}

CTEST(Calculating, test11)
{
        ASSERT_EQUAL(108001, calculation_of_contribution(100001, 240));
}

CTEST(Calculating, test12)
{
        ASSERT_EQUAL(115001, calculation_of_contribution(100001, 241));
}

