
* Program and Process
* Compile and link
* Build process
* Make / Makefile
* git
    * git init, git status, git log, git add, git commit

* Sections
    * .text
    * .data
    * .bss
    * .heap
    * . stack

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
    * single copy of library function loaded in memory
    * less memory


* PID, PPID, UID
* getpid, getppid
* man pages


* fork- create a new process
    * child-parent relationship
    * parent and child have their own address space (text, data, bss, stack and heap) 

* Pseudo Parallelism
* True Parallelism

* ltrace
* strace
* Program using systam call -> write a string inside a file

* Library
    * user space
    * May be buffered
    * Formatted I/o
* System
    * kernal spce
    * Not buffered I/o
    * No formatted I/o

* Open -O-CREAT
* int -file descriptor
    *fd - represents an open file in the file in the kernal 
    * 0 - Standard input
    * 1 - Standard output
    * 2 - Standard error

* Process states:
    * Create
    * Ready (multiple processes)
    * Running (one process -> uniprocess)
    * Waiting (multiple processes)
    * Destroy

* Scheduling algorithm -> Choose the next process that has to be executed
* Context switch -> Context saving (current process) + Scheduling (Choose the new Process) + Context Restoring (New Process)
* Context -> PC, SP, GPR, Flags -> Hardware Registers -> Uniprocessor (1 Copy)

    * Blocking -> Process may go into a waiting state
    * Non Blocking -> never block -> immediately return back after doing functionality

    Inter process communication