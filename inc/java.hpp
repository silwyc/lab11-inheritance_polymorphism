#pragma once
#include "inc/generateCode.hpp"

using namespace std;

class java :public ::CodeGenerator
{
public:
    java(Lang language) :CodeGenerator(language)
    {
        cout << "JAVA class: constructor " << endl;
    }
    virtual ~java()
    {
        cout << "JAVA class: destructor " << endl;
    }
    string someCodeRelatedThing() override
    {
        return "JAVA code";
    }
};