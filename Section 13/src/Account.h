// include guard in header file
#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

// #pragma once is also a very similar safeguard, though less supported in compilers

class Account {

private:
    double balance;
public:
    void set_balance(double bal);
    double get_balance();
};

// we will #include in our .cpp file
// you can only include this in one file, any more and the compiler will complain
// use an include guard to make sure the compiler only includes this file once

#endif