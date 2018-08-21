# /* ************************************ */
# /*                                      */
# /* Makefile                             */
# /*                                      */
# /* By: Marla, Juan, Nagisa, Kenta       */
# /*                                      */
# /* ************************************ */

all: o a clean

o:
	gcc -c *.c

a:
	ar -cvq libvc.a *.o

clean:
	rm -f *.o