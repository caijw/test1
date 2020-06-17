# constructor_test
Show you the discipline of copy and move constructors.

## Build
```bash
git clone https://github.com/jingedawang/constructor_test.git
cd constructor_test
mkdir build
cd build
cmake ..
make
```

## Usage
```bash
./constructor_test
```

We have tested the code under GCC 5.4.0. It should have the following output:
```
-------------------------1-------------------------
Constructor
-------------------------2-------------------------
Copy Constructor
-------------------------3-------------------------
Copy Constructor
-------------------------4-------------------------
Copy Assignment operator
-------------------------5-------------------------
Constructor
Move Constructor
-------------------------6-------------------------
Move Constructor
-------------------------7-------------------------
Constructor
Move Constructor
Move Constructor
-------------------------8-------------------------
-------------------------9-------------------------
Constructor
Move Assignment operator
```
To figure out what these results mean, please see my blog [拷贝构造函数和移动构造函数](https://www.jianshu.com/p/f5d48a7f5a52).
