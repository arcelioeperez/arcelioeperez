# Machine Learning  

- Boost Library  
- Eigen  

**Installing with apt:**    

```
sudo apt install libeigen3-dev
sudo apt-get install libboost-all-dev
```  

**Installing from source:**     

[Eigen Documentation](http://eigen.tuxfamily.org/index.php?title=Main_Page)  
[Boost Documentation](https://www.boost.org/)  

**If running from Linux, **add** the libraries to the `/usr/include/` directory**   

```
mv library /usr/include/
```  

**If not, then, compile with the `-I` flag**    

```
g++ -I /path/to/the/library
clang++ -I /path/to/the/libary
```  
**Include the library path in the program**    

*Example:*  
```
#include <boost/path/to/the/header/file>
#include <Eigen/path/to/the/header/file> 
```

**If there is an error (usually if running from Linux). Define `NDEBUG` in the first line**    
```
#define NDEBUG  
```  
