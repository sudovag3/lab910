#include "test_polynomial.h"

void Test_Polynomial::constructor()
{
    double coefficients[] = {1, 2, 3};
    Polynomial p(2, coefficients);
    std::cout << p << std::endl;
    QCOMPARE(p(0), 1.0);
    QCOMPARE(p(1), 6.0);
    QCOMPARE(p(2), 17.0);
}

void Test_Polynomial::copyConstructor()
{
    double coefficients[] = {1, 2, 3};
    Polynomial p1(2, coefficients);
    Polynomial p2(p1);
    QCOMPARE(p2(0), 1.0);
    QCOMPARE(p2(1), 6.0);
    QCOMPARE(p2(2), 17.0);
}

void Test_Polynomial::assignmentOperator()
{
    double coefficients[] = {1, 2, 3};
    Polynomial p1(2, coefficients);
    Polynomial p2 = p1;
    QCOMPARE(p2(0), 1.0);
    QCOMPARE(p2(1), 6.0);
    QCOMPARE(p2(2), 17.0);
}

void Test_Polynomial::operatorFunction()
{
    double coefficients[] = {1, 2, 3};
    Polynomial p(2, coefficients);
    QCOMPARE(p(0), 1.0);
    QCOMPARE(p(1), 6.0);
    QCOMPARE(p(2), 17.0);
}

void Test_Polynomial::additionOperator()
{
    double coefficients1[] = {1, 2, 3};
    double coefficients2[] = {3, 2, 1};
    Polynomial p1(2, coefficients1);
    Polynomial p2(2, coefficients2);
    Polynomial p3 = p1 + p2;
    QCOMPARE(p3(0), 4.0);
    QCOMPARE(p3(1), 12.0);
    QCOMPARE(p3(2), 28.0);
}

void Test_Polynomial::subtractionOperator()
{
    double coefficients1[] = {1, 2, 3};
    double coefficients2[] = {3, 2, 1};
    Polynomial p1(2, coefficients1);
    std::cout << p1 << std::endl;
    Polynomial p2(2, coefficients2);
    Polynomial p3 = p1 - p2;
    QCOMPARE(p3(0), -2.0);
    QCOMPARE(p3(1), 0.0);
    QCOMPARE(p3(2), 6.0);
}

void Test_Polynomial::multiplicationOperator()
{
    double coefficients1[] = {1, 2, 3};
    double coefficients2[] = {3, 2, 1};
    Polynomial p1(2, coefficients1);
    Polynomial p2(2, coefficients2);
    Polynomial p3 = p1 * p2;
    QCOMPARE(p3(0), 3.0);
    QCOMPARE(p3(1), 36.0);
    QCOMPARE(p3(2), 187.0);
    QCOMPARE(p3(3), 612.0);
    QCOMPARE(p3(4), 1539.0);

}
