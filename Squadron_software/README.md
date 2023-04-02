# Commands used in the workshop:

## Compile and run gcc
```
gcc count.c 
./a.out 
file a.out
gcc -c count.c
objdump -D count.o | less
ls -l
```

## Installing riscv toolchain

```
mkdir riscv_toolchain
cd riscv_toolchain
wget "https://static.dev.sifive.com/dev-tools/riscv64-unknown-elf-gcc-8.3.0-2019.08.0-x86_64-linux-ubuntu14.tar.gz"
tar -xvzf riscv64-unknown-elf-gcc-8.3.0-2019.08.0-x86_64-linux-ubuntu14.tar.gz 
export PATH=$PWD/riscv_toolchain/riscv64-unknown-elf-gcc-8.3.0-2019.08.0-x86_64-linux-ubuntu14/bin:$PATH
```

## Compile and analyse riscv assembly
```
riscv64-unknown-elf-gcc count.c 
./a.out
file a.out
riscv64-unknown-elf-gcc -O1 -mabi=lp64 -march=rv64i -o count.o count.c 
riscv64-unknown-elf-objdump -D count.o | less
```