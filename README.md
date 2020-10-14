
* Program and Process
* Compile and link
* Build process
* Make / Makefile
* git
    * git init, git status, git log, git add, git commit

* Modular programs
    * Libraries
        * Standard Libraries (linux - libc.a and libc.so)
        * User libraries / 3rd party library
    * Two types
        * Static => *.a
        * Dynamic (Shared objects) => *.so 

* Static Library
    * ar x (extract)
    * ar crv libname.a 1.o 2.o ....... n.o => (*.o)
    * lib function definition embedded in binary
    * multiple copies of library function
* Dynamic Library
    * gcc -o libname.so -shared -fpic
    * lib function deference definition in binary