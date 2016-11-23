Readme
======
[![Build Status](https://travis-ci.org/Dark-Aether/Password_Generator.svg?branch=dev)](https://travis-ci.org/Dark-Aether/Password_Generator)
[![codecov](https://codecov.io/gh/Dark-Aether/Password_Generator/branch/master/graph/badge.svg)](https://codecov.io/gh/Dark-Aether/Password_Generator)

Use
---

    make
    ./build/GenPasswd [-s size] [-n number of password]

By default, if there is no parameters, the size of the password is 24

Examples
--------

    $ ./build/GenPasswd
    kC57rLaLPVi/igK#5)GsEP/-

    $ ./build/GenPasswd -n 5
    HmN-OY_i*2cXccW/vy9TPA4S
    aBmduq;2C3U&A!BZRDw@Fv?2
    TTuKvzcvdR1x8/#LR_Ct,4-4
    IpZ:;;&G8Nsd.vy!;BP@qNG8
    0lCTqvYZ.Z/ZL7Htt1wgx)yL

    $ ./build/GenPasswd -s 32
    /b?zUB(Itu-:p560e;YFm(gzT5SfL4m4

    ./build/GenPasswd -n 2 -s 32 
    @qbF@!ToD/9aFx4sSWD5:3R&)KSqcELz
    )M5tCZHhPRhw/,&09uN#ye!u!I;(oxTk