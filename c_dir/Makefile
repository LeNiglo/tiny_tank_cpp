NAME = 		tiny_tank

SRCS =		main.cpp \
			TinyTank.cpp \
			game/Game.cpp \
			game/Player.cpp \
			controllers/GameController.cpp \
			screens/HomeScreen.cpp \
			screens/GameScreen.cpp \
			entities/tanks/Tiger.cpp \
			entities/tanks/Sniper.cpp \
			entities/tanks/Rusher.cpp \


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
