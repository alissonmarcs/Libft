To allow make to find a customary method for updating a target file, all you have to do is refrain from specifying recipes yourself.

Then make will figure out which implicit rule to use based on which kind of source file exists or can be made.

You would want to write a rule for foo.o with no recipe if you need to specify additional prerequisites

Each implicit rule has a target pattern and prerequisite patterns.

Of course, when you write the makefile, you know which implicit rule you want make to use, and you know it will choose that one because you know which possible prerequisite files are supposed to exist.

In general, make searches for an implicit rule for each target, and for each double-colon rule, that has no recipe.

This rule does the right thing for a simple program with only one source file. It will also do the right thing if there are multiple object files (presumably coming from various other source files), one of which has a name matching that of the executable file.

In more complicated cases, such as when there is no object file whose name derives from the executable file name, you must write an explicit recipe for linking.

make follows the convention that the rule to compile a .x source file uses the variable COMPILE.x.

Every rule that produces an object file uses the variable OUTPUT_OPTION. make defines this variable either to contain ‘-o $@

# Explicando o makefile da libft:

```Makefile
$(NAME): $(OBJECTS)

bonus: $(BONUS_OBJECTS)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INCLUDES)
	ar rcs $(NAME) $@
```

A regra `%.o: %.c libft.h` compila objetos, sejam eles do mandatório ou não. O requisito do `$(NAME)` são objetos, então o make irá procurar pela regra que compila objetos. O requisito do bonus são objetos, então o make irá procurar pela regra que compila objetos.

Na chamada `$(NAME): $(BONUS_OBJECTS)`, na regra de compilação de objetos, os `%.o` vão assumir o que está na variável `$(OBJECTS)`. Na chamada `bonus: $(BONUS_OBJECTS)`, na regra de compilação dos objetos, os `%.o` vão assumir o que está na variável `$(BONUS_OBJECTS)`.
