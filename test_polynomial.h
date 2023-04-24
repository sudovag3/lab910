#ifndef TEST_POLYNOMIAL_H
#define TEST_POLYNOMIAL_H

#include <QtTest>
#include "polynomial.h"
#include <QObject>

class Test_Polynomial : public QObject
{
    Q_OBJECT
private slots:
    void constructor();
    void copyConstructor();
    void assignmentOperator();
    void operatorFunction();
    void additionOperator();
    void subtractionOperator();
    void multiplicationOperator();
};

#endif // TEST_POLYNOMIAL_H
