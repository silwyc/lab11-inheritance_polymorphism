#include <iostream>
#include "inc/someFunctions.hpp"
#include "inc/php.hpp"
#include "inc/cPlusPlus.hpp"
#include "inc/java.hpp"
#include "inc/generateCode.hpp"

using namespace std;

int main()
{
    cout << "===== c++ =====" << endl;
    CodeGenerator* cppCode = generateCode(C_plus_plus);
    cout << cppCode->someCodeRelatedThing() << endl;
    cout << "==========" << endl;

    cout << "===== java =====" << endl;
    CodeGenerator* javaCode = generateCode(Java);
    cout << javaCode->someCodeRelatedThing() << endl;
    cout << "==========" << endl;

    cout << "===== php =====" << endl;
    CodeGenerator* phpCode = generateCode(PhP);
    cout << phpCode->someCodeRelatedThing() << endl;
    cout << "==========" << endl;

    delete cppCode;
    delete javaCode;
    delete phpCode;

    return 0;
}