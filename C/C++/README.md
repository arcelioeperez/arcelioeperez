# Reading CSV files with Eigen and Boost  

If using a CSV file different than **winedata** or **i (insurance)**, just add the CSV file to the same directory and change the name in the `Makefile`.  

The `Makefile` is using the `clang++` compiler. If you are using the `g++` compiler, make sure to change the `CXX` variable.    

Use the `-S` to see the Assembly Language representation.  
See more about compiler flags [here](https://www.hpc2n.umu.se/documentation/compilers/flags).  

More information about Eigen and Boost: [here](../../Libraries.md)  

### Compile using **Make**  

```
make
```  

### Run with **Make**  

```
make run
```  

### Delete the `main` executable  

```
make clean
```

### Citation:   
[AI Coding - Linear Regression C++](https://www.youtube.com/watch?v=jKtbNvCT8Dc&t=623s)  

### Operating System used:   
Ubuntu 20.04.10 LTS
