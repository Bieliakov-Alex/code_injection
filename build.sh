gcc -fPIC main.c -o main-shared
gcc -shared -fPIC -o doubleputs.so doubleputs.c -ldl
