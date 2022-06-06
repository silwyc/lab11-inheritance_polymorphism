#pragma once
#include <iostream>
#include "inc/php.hpp"
#include "inc/cPlusPlus.hpp"
#include "inc/java.hpp"
#include "inc/generateCode.hpp"

CodeGenerator* generateCode(Lang language)
{
    CodeGenerator* shift = nullptr;
    switch (language)
    {
    case Java:
    {
        shift = new JAVA(language);
        shift->someCodeRelatedThing();
        return shift;
        break;
    }
    case C_plus_plus:
    {
        shift = new C_PLUS_PLUS(language);
        shift->someCodeRelatedThing();
        return shift;
        break;
    }
    case PhP:
    {
        shift = new PHP(language);
        shift->someCodeRelatedThing();
        return shift;
        break;
    }
    }
}