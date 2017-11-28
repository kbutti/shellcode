# How to Compile

```c
gcc -z execstack                      -o sc1.out sc1.c
gcc -z execstack -fno-stack-protector -o sc2.out sc2.c
````

