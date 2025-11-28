#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > retval;
    auto func=[&](Human& it){
        it.birthday();
        retval.insert(retval.begin(),it.isMonster() ? 'n' : 'y');
    };
    std::for_each(people.begin(), people.end(), func);
   
    return retval;
}
