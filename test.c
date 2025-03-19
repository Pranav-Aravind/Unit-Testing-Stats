#include <stdio.h>
#include <stdlib.h>
#include "functions.h"
#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>

/*If an empty array is taken as an argument, the functions return 0 to prevent unwanted errors and the assertion checks for
  a zero and so the test case passes*/
	void avgEmptyArr_testcase() {
		double avgEmptyArr[] ={};
		CU_ASSERT_DOUBLE_EQUAL(avg(avgEmptyArr,0), 0, 0.001);
	}
/*Test case is for an array with one double number, and it has two assertions, one for an array with a positive double number
  and one for an array with a negative double number*/
	void avgOneNum_testcase() {
		double avgPositiveOneArr[] ={5.371};
		CU_ASSERT_DOUBLE_EQUAL(avg(avgPositiveOneArr,1), 5.371, 0.001);
		double avgNegativeOneArr[] ={-34.083};
		CU_ASSERT_DOUBLE_EQUAL(avg(avgNegativeOneArr,1), -34.083, 0.001);
	}
/*Test case is for an array with all the elements being the same double number, and it has three assertions, one for positive,
  one for negative, and one for zero*/
	void avgAllSameNum_testcase() {
		double avgPositiveAllSameArr[] ={9.53, 9.53, 9.53, 9.53, 9.53, 9.53};
		CU_ASSERT_DOUBLE_EQUAL(avg(avgPositiveAllSameArr,6), 9.53, 0.001);
		double avgNegativeAllSameArr[] ={-3.479, -3.479, -3.479, -3.479};
		CU_ASSERT_DOUBLE_EQUAL(avg(avgNegativeAllSameArr,4), -3.479, 0.001);
		double avgZeroAllSameArr[] ={0, 0, 0, 0};
		CU_ASSERT_DOUBLE_EQUAL(avg(avgZeroAllSameArr,4), 0, 0.001);
	}
/*Test case is for an array with some of the elements being the same double number and other elements being different double
  numbers, and it has two assertions, one where two elements are the same double number zero in the array, and the other
  assertion having an array with three elements being the same negative double number*/
	void avgSameandDiffNum_testcase() {
		double avgZeroSameArr[] ={-4.25, 0, 9.24, 0};
		CU_ASSERT_DOUBLE_EQUAL(avg(avgZeroSameArr,4), (-4.25 + 0 + 9.24 + 0)/4, 0.001);
		double avgNegativeSameArr[] ={-4.1, -4.1, 8.29, -9.14, 0, -4.1};
		CU_ASSERT_DOUBLE_EQUAL(avg(avgNegativeSameArr,6), (-4.1 + -4.1 + 8.29 + -9.14 + 0 + -4.1)/6, 0.001);

	}
/*Test case is for an array with all elements being different double. It has three assertions, two of them have elements being
  different double numbers such as positive, negative, zero and the third assertion having only negative double numbers*/
	void avgDiffNum_testcase() {
		double avgDiffArr[] ={-4.87, 11.27, 0, -0.536};
		CU_ASSERT_DOUBLE_EQUAL(avg(avgDiffArr,4), (-4.87 + 11.27 + 0 + -0.536)/4, 0.001);
		double avgNoZerosDiffArr[] ={14.674, -19.47, -39.542, 9.34, 0, 2.46};
		CU_ASSERT_DOUBLE_EQUAL(avg(avgNoZerosDiffArr,6), (14.674 + -19.47 + -39.542 + 9.34 + 0 + 2.46)/6, 0.001);
		double avgPositiveDiffArr[] ={3.41, 47.4, 8.23, 6.74};
		CU_ASSERT_DOUBLE_EQUAL(avg(avgPositiveDiffArr,4), (3.41 + 47.4 + 8.23 + 6.74)/4, 0.001);
		double avgNegativeDiffArr[] ={-7.89, -57.82, -0.563, -11.567};
		CU_ASSERT_DOUBLE_EQUAL(avg(avgNegativeDiffArr,4), (-7.89 + -57.82 + -0.563 + -11.567)/4, 0.001);

	}
/*Test case is for checking if the test cases pass for incorrect test values. It has two assertions, one of them is for checking
  if a value rounded off to a different decimal point than the exact value will still pass as correct. The second assertion
  in average checks if a random value passes as the correct average*/
	void avgFail_testcase()
	{
		double avgincorrectDecimalPointFailArr[] ={-6.19, 0, 0.13, -17.32};
		CU_ASSERT_DOUBLE_EQUAL(avg(avgincorrectDecimalPointFailArr,4), 5.85, 0.001);
		double avgIncorrectValueFailArr[] ={45.91, 0, -17.32, 23.44};
		CU_ASSERT_DOUBLE_EQUAL(avg(avgIncorrectValueFailArr,4), 5, 0.001);
	}

//Same test cases for the maximum function
	void maxEmptyArr_testcase() {
		double maxEmptyArr[] ={};
		CU_ASSERT_DOUBLE_EQUAL(max(maxEmptyArr,0), 0, 0.001);
	}

	void maxOneNum_testcase() {
		double maxPositiveOneArr[] ={2.65};
		CU_ASSERT_DOUBLE_EQUAL(max(maxPositiveOneArr,1), 2.65, 0.001);
		double maxNegativeOneArr[] ={-7.02};
		CU_ASSERT_DOUBLE_EQUAL(max(maxNegativeOneArr,1), -7.02, 0.001);
	}

	void maxAllSameNum_testcase() {
		double maxPositiveAllSameArr[] ={5.17, 5.17, 5.17, 5.17, 5.17, 5.17};
		CU_ASSERT_DOUBLE_EQUAL(max(maxPositiveAllSameArr,6), 5.17, 0.001);
		double maxNegativeAllSameArr[] ={-11.35, -11.35, -11.35, -11.35};
		CU_ASSERT_DOUBLE_EQUAL(max(maxNegativeAllSameArr,4), -11.35, 0.001);
		double maxZeroAllSameArr[] ={0, 0, 0, 0};
		CU_ASSERT_DOUBLE_EQUAL(max(maxZeroAllSameArr,4), 0, 0.001);
	}

	void maxSameandDiffNum_testcase() {
		double maxZeroSameArr[] ={-17.8, 0, 4.09, 0};
		CU_ASSERT_DOUBLE_EQUAL(max(maxZeroSameArr,4), 4.09, 0.001);
		double maxNegativeSameArr[] ={-9.84, -9.84, -17.32, -9.84, -16.27, -27.82};
		CU_ASSERT_DOUBLE_EQUAL(max(maxNegativeSameArr,6), -9.84, 0.001);
	}

	void maxDiffNum_testcase() {
		double maxDiffArr[] ={-8.13, 14.37, 0, -0.173};
		CU_ASSERT_DOUBLE_EQUAL(max(maxDiffArr,4), 14.37, 0.001);
		double maxNoZerosDiffArr[] ={4.721, -7.3, -1.54, 3.14, 0, -0.24};
		CU_ASSERT_DOUBLE_EQUAL(max(maxNoZerosDiffArr,6), 4.721, 0.001);
		double maxPositiveDiffArr[] ={9.41, 133.8, 5.11, 12.64};
		CU_ASSERT_DOUBLE_EQUAL(max(maxPositiveDiffArr,4), 133.8, 0.001);
		double maxNegativeDiffArr[] ={-4.77, -87.26, -0.718, -19.76};
		CU_ASSERT_DOUBLE_EQUAL(max(maxNegativeDiffArr,4), -0.718, 0.001);
	}
/*Test case is for checking if the test cases pass for incorrect test values. It has two assertions, one of them is for checking
  if a value rounded off to a different decimal point than the exact value will still pass as correct. The second assertion
  in maximum the second assertion checks if a value that is not the maximum passes as maximum*/
	void maxFail_testcase()
	{
		double maxincorrectDecimalPointFailArr[] ={-6.19, 0, 0.13, -17.32};
		CU_ASSERT_DOUBLE_EQUAL(max(maxincorrectDecimalPointFailArr,4), 0.1, 0.001);
		double maxIncorrectMaximumFailArr[] ={45.91, 0, -17.32, 23.44};
		CU_ASSERT_DOUBLE_EQUAL(max(maxIncorrectMaximumFailArr,4), -17.32, 0.001);
	}

void runAllTests(){

	CU_initialize_registry();
//suite is created for the average function which contains all the test cases for average
	CU_pSuite suiteAvg = CU_add_suite("avg_suite", 0, 0);
	CU_add_test(suiteAvg, "avgEmptyArr_test", avgEmptyArr_testcase);
	CU_add_test(suiteAvg, "avgOneNum_test", avgOneNum_testcase);
	CU_add_test(suiteAvg, "avgAllSameNum_test", avgAllSameNum_testcase);
	CU_add_test(suiteAvg, "avgSameandDiffNum_test", avgSameandDiffNum_testcase);
	CU_add_test(suiteAvg, "avgDiffNum_test", avgDiffNum_testcase);
	CU_add_test(suiteAvg, "avgFail_test", avgFail_testcase);
//suite is created for the maximum function which contains all the test cases for maximum
	CU_pSuite suiteMax = CU_add_suite("max_suite", 0, 0);
	CU_add_test(suiteMax, "maxEmptyArr_test", maxEmptyArr_testcase);
	CU_add_test(suiteMax, "maxOneNum_test", maxOneNum_testcase);
	CU_add_test(suiteMax, "maxAllSameNum_test", maxAllSameNum_testcase);
	CU_add_test(suiteMax, "maxSameandDiffNum_test", maxSameandDiffNum_testcase);
	CU_add_test(suiteMax, "maxDiffNum_test", maxDiffNum_testcase);
	CU_add_test(suiteMax, "maxFail_test", maxFail_testcase);

	CU_basic_set_mode(CU_BRM_VERBOSE);
	CU_basic_run_tests();
	CU_cleanup_registry();
}

int main() {
    runAllTests();
    return 0;
}
