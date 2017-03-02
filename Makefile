#  Makefile
#  #    a makefile for the stack example.
#
#
##            SHELL = 	/bin/sh

#              TOP = .
#              #      CURRENT_DIR = .

#              CPP = /lib/cpp $(STD_CPP_DEFINES)
#                            CXX  = g++
#
#                            #        CCOPTIONS =
#           CFLAGS = $(CDEBUGFLAGS) $(CCOPTIONS) $(ALLDEFINES)
#           #           RM_CMD = $(RM) *.o core

SRCS=	main.cpp	\
	stack.cpp	\
	linkedList.cpp

OBJS=	main.o	\
	stack.o		\
	linkedList.o

main.o:	stack.h

stack.o:	stack.h	\
	linkedList.h

link.o:	linkedList.h

PROGRAMS = stackTest

all::  $(PROGRAMS)


stackTest: $(OBJS)
	$(CXX) -o $@ $(OBJS)
#$(CXX) -o $@ $(OBJS) $(LDOPTIONS) $(LOCAL_LIBRARIES) $(LDLIBS)  $(EXTRA_LOAD_FLAGS)

clean::
	$(RM) stackTest 

latex::
	latex stack.tex    

###########################################################################
# common rules for all Makefiles - do not edit
#
# emptyrule::
#
# clean::
# 	rm *.o
#
###########################################################################
