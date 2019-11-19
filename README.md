---
project cplusplus
---

# for study c plus plus
## first step 
---
- remind the c plus foundation
- study the functions in the stl
  - reference: [alorithm of stl](https://github.com/steveLauwh/Algorithms)
  - reference: [source code of stl](https://github.com/steveLauwh/SGI-STL)
  - code exercise: this project
  
## second step 
---
- [c++ 命名规范](https://www.cnblogs.com/zhuqn/p/5210179.html) 
  - 常用：
  - 文件命名：小写加下划线，.h .cpp 成对出现
  - 本地变量小写_下划线 ``int error_code``， 类的成员变量最后加一位下划线， 全局变量通常以g_开头
  - const 常量，以小写k开头后面跟大写首字母开头的单词， ``const int kDaysInAWeek = 7``
  - 类的函数名称: 大写首字母大写首字母... ``class Block { public: void CalculateInt();};``; 对于class的私有变量的get set方法，
  使用和本地变量名一直的写法 `` int get_error_code()``
  - 命名空间全部小写： ``namespace handle_error_code``
  - 类每一个单词首字母大写，不包含下划线 ``class DataBaseMetaData { };``
  - 