#ifndef PROCESSORFACTORY_HPP
#define PROCESSORFACTORY_HPP

#include "Processor.hpp"


#include<iostream>


class ProcessorFactory {
    public:
    static processor*  createobjects ( const std::string& processortype);
};


















#endif