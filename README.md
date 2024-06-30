# MultiLibTest
Can one repo host multiple Arduino Libs.

# Introduction
This is a single repo, containing two Arduino Libraries.
The libraries do not do anything useful.
This is a test to see if it is possible to submit those libraries to the
Arduino library [registry](https://github.com/maarten-pennings/library-registry).

# Files

The libaries are called `mltLib1` and `mltLib2`. Both have an example.
There is also a top-level sketch `mltSketch1` using both libs.

```
MultiLibTest
+- libraries
|  +-mltLib1
|    +- examples
|    |  +- mltLib1
|    |     +- mltLib1.ino
|    +- src
|    |  +- mltLib1.cpp
|    |  +- mltLib1.h
|    +- library.properties
|    +- LICENSE
|
|  +-mltLib2
|    +- examples
|    |  +- mltLib2
|    |     +- mltLib2.ino
|    +- src
|    |  +- mltLib2.cpp
|    |  +- mltLib2.h
|    +- library.properties
|    +- LICENSE
|
+- sketches
|  +-mltSketch1
|    +-mltSketch1.ino
|
+- READ.me
```

(end)
