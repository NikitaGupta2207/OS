
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

*  Inter Communication Process (IPC)
    P1-> P2

* Pipes
    * IPC
    * Unidirectional
    * Used for Related Process
    * 1 -> Writing, 0 -> Reading
    * Child will inherit file descriptors

* FIFO
    * IPC
    * Unidirectional
    * Used for Unrelated Prcocess
    * fifos aka named pipes
    * mkfifo (command and API)

* Batch
* Multi programming
* Multi tasking
* Mutli processing
* Multi user

* Design
    * Monolithic Approach
        * eg. Linux, FreeRTOS
        * Single address sapce
    * Micro Kernel Approach
        * eg. QNX, Minix
        * Multiple adress space
            * System Process -> Priviledged eg. Networking, DD
            * User Process -> Non-Priviledeged -> MP3 player, Editor
        * Message Queue used for information sharing

* Threads 
    * POSIX
    * Library pthread
    * pthread_t
    * pthread_attr_t -> Attributes
        * Joinable - detachable
        * Scheduling policy
        * priority
    * Each thread has its own stack
    * Threads share -> .teaxt, .data, .bss, .heap

* Race condition
    * Shared data
    * Thread accessing shared data -> race condition

* Mutual Exclusion
    * Mutex
        * Futex
        * Recursive Mutax
        * Adaptive Mutax
        * Error Checking Mutax 

* Semaphore(sem_t)
    * Binary
        * Mutual Exclusion -> inital value -> 1
        * Signalling -> initial value ->0/1
    * Counting
        * inital -> N

* Zombie Processes and Inherited child(Orphan processes)

* Read Write Locks

* Scheduling algorithms
    * Round Robin
        * Time slicing
        * Time slice -> Quantum time -> Quatum period
    * Shotest job first
        * Preemptive
        * Non-Preemptive
    * Priority base
        * Preemptive
        * Non-Preemptive
    * FIFO
* Multi-level scheduling

* Response time
* Throughput