NAME		=	exec

CXX		=	g++

RM		=	rm -f

CXXFLAGS	=	-W -Wextra -Wall -O3
CXXFLAGS	+=	-Iheaders/ -I../src/headers/

LDFLAGS		=	

SRCS		=	../src/AObserver.cpp	\
			../src/ASubject.cpp	\
			../src/Notifier.cpp	\
			main.cpp		\
			Jewel.cpp		\
			Door.cpp		\
			Guard.cpp

OBJS		=	$(SRCS:.cpp=.o)

ECHO		=	echo -e

all		:	$(NAME)

$(NAME)		:	$(OBJS)
			@$(CXX) $(OBJS) -o $(NAME) $(LDFLAGS)
			@$(ECHO) '\033[1;37;44m> Compiled {\033[4m$(NAME)}\033[0m'

clean		:
			-@$(RM) $(OBJS)
			@$(ECHO) '\033[1;37;41m> Directory cleaned\033[0m'

fclean		:	clean
			-@$(RM) $(NAME)
			@$(ECHO) '\033[1;37;41m> Remove executable\033[0m'

re		:	fclean all

.PHONY		:	all clean re
