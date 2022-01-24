# Accurate Timer that can measure ellapsed time for an Assembly program

#The whole code is not mine but I manage it to be able to run with assembly!

vi doNothing.s
as -g -o doNothing.o doNothing.s
ld -g -o doNothing doNothing.o

gcc -o timer timer.c
./timer
