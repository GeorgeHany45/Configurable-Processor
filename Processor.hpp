#ifndef PROCESSOR_HPP
#define PROCESSOR_HPP


#include<iostream>


class processor {
public:

processor();
  virtual ~processor() ;
 virtual void processortype()=0;

};

class textprocessor : public processor {
public:
textprocessor();

void processortype()override;
};


class numericprocessor : public processor {
    public:
    numericprocessor();
    void processortype()override;
};


class imageprocessor : public processor {
    public:
    imageprocessor();
    void processortype()override;
};


class audioprocessor : public processor {
    public:
    audioprocessor();
    void processortype() override;
};

#endif