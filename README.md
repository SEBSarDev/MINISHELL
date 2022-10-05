# MINISHELL
My own version of bash.

In this school project, we had to recode our own version of bash (only some features), with 'bash --posix' for reference.
we had to implement : 
-  Display a prompt when waiting for a new command.
- a working history.
- search and launch the right executable (based on the PATH variable or using a
relative or an absolute path).
- redirection <, >, <<, >>
- pipes |
- handle environment variables
- Handle $? 
- ctrl-C displays a new prompt on a new line.
- ctrl-D exits the shell.
- ctrl-\ does nothing.
- implement thefollowing builtins:
  ◦ echo with option -n
  ◦ cd with only a relative or absolute path
  ◦ pwd with no options
  ◦ export with no options
  ◦ unset with no options
  ◦ env with no options or arguments
  ◦ exit with no options
  
 Finally, we can't have the right to use the readline() function, so we had to deal with text input, which allowed me to learn more about the non-canonical mode of a terminal.

To use it, simply :
```
$ make
$ ./minishell
```
