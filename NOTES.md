Just playing around with C and assembly


```shell
objdump -d ./a.out

# more readable
objdump -Mintel -d ./a.out


+-------------------------+-----------+-----------------------------+
| Goal                   | Tool      | Command                     |
+-------------------------+-----------+-----------------------------+
| See assembly           | objdump   | objdump -d program          |
| See symbols            | nm        | nm program                  |
| See ELF internals      | readelf   | readelf -a program          |
| See linked libraries   | ldd       | ldd program                 |
| Hex dump               | xxd       | xxd program                 |
| Debug live             | gdb       | gdb program                 |
+-------------------------+-----------+-----------------------------+


```
