NAME = 		tiny_tank

SRCS =		main.cpp \
			TinyTank.cpp \
			controllers/HomeScreen.cpp \
			

CXX = 		g++

RM = 		rm -rfv

OBJS = 		$(SRCS:.cpp=.o)

CXXFLAGS +=	-std=c++11
CXXFLAGS +=	-Wall
CXXFLAGS +=	-Wextra
CXXFLAGS +=	-W
#CXXFLAGS += -Werror

SFML_LIBS =	-lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio -lsfml-network
LIBS =		-pthread $(SFML_LIBS)

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CXX) -o $(NAME) $(OBJS) $(CXXFLAGS) $(LIBS)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re: 		fclean all

.PHONY: all clean fclean re
