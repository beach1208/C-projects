# /* ************************************ */
# /*                                      */
# /* Makefile                             */
# /*                                      */
# /* By: Marla, Juan, Nagisa, Kenta       */
# /*                                      */
# /* ************************************ */

all: libvc.a

libvc.a:
	gcc -c *.c
	ar -cvq libvc.a *.o

clean:
	rm -f *.o