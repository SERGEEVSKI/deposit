#include <stdio.h>
#include <stdlib.h>
#include <ctest.h>
#include <Deposit.h>

CTEST(Check_data, test1)
{
	ASSERT_EQUAL(0, data_checking(10000, 365));
} 

/*CTEST(Check_data, test1)
{
        ASSERT_EQUAL(0, data_checking(10000, 365));
}

CTEST(Check_data, test1)
{
        ASSERT_EQUAL(0, data_checking(10000, 365));
}

CTEST(Check_data, test1)
{
        ASSERT_EQUAL(0, data_checking(10000, 365));
}

CTEST(Check_data, test1)
{
        ASSERT_EQUAL(0, data_checking(10000, 365));
}

CTEST(Check_data, test1)
{
        ASSERT_EQUAL(0, data_checking(10000, 365));
}

CTEST(Check_data, test1)
{
        ASSERT_EQUAL(0, data_checking(10000, 365));
}

CTEST(Check_data, test1)
{
        ASSERT_EQUAL(0, data_checking(10000, 365));
}
*/
