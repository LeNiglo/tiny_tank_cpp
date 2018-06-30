NAME = 		tiny_server

SRCS =		main.cpp \
			Server.cpp

CXX = 		g++

RM = 		rm -rfv

OBJS = 		$(SRCS:.cpp=.o)

CXXFLAGS +=	-std=c++11
CXXFLAGS +=	-Wall
CXXFLAGS +=	-Wextra
CXXFLAGS +=	-W
#CXXFLAGS += -Werror

LIBS = 		-pthread -lsfml-system -lsfml-network

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CXX) -o $(NAME) $(OBJS) $(CXXFLAGS) $(LIBS)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re: 		fclean all

.PHONY: all clean fclean re
