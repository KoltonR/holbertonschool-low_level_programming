0.(gcc -E $CFILE -o c) (Writes a script that runs a C file through the preprocessor and save the result into another file)

1.(gcc -c $CFILE) (Writes a script that compiles a C file but does not link.)

2.(gcc -S $CFILE) (Writes a script that generates the assembly code of a C code and save it in an output file).
