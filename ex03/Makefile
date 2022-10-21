NAME			=			materia

CC				=			c++

CFLAGS			=			-Wall -Werror -Wextra --std=c++98 -g

RM				=			rm -rf

SRCS			=			main.cpp AMateria.cpp Cure.cpp Ice.cpp Character.cpp MateriaSource.cpp

OBJSDIR			=			objs

OBJS			=			$(SRCS:%.cpp=$(OBJSDIR)/%.o)

all				:			$(NAME)

$(NAME) : $(OBJS)
		$(CC) $(OBJS) -o $(NAME)

$(OBJSDIR)/%.o : %.cpp
		mkdir -p '$(@D)'
		$(CC) $(CFLAGS) -c $< -o $@

clean :
		$(RM) $(OBJS)
		$(RM) $(OBJSDIR)

fclean : clean
		$(RM) $(NAME)

re : fclean all

.PHONY : clean fclean re