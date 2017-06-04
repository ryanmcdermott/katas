# cs-katas

These are [katas](https://en.wikipedia.org/wiki/Kata_(programming) written in
C++. They contain everything from common data structures, algorithms, and
programming problems.

Follow the instructions in the following order to build and test a kata.

Instructions on creating a new kata are in the `Development` section below the
_Building_ and _Testing_ sections.

## Installation
```
sudo apt-get install clang
sudo apt-get install clang-format
```

## Building
Run `build.sh [folder]` to build an executable in the `./[folder]/bin` directory

Example: `./build.sh quicksort`

## Testing
Run `./test.sh [folder]`  

Example: `./test.sh quicksort`

## Development

Run `./new.sh [folder]`

Example: `./new.sh middle_out`

A new directory will be created with your `[folder]` name, in this case
`middle_out`.

## Structure
`[folder]`:
  >`main.cpp`: Kata test code

  >`folder.cpp`: Kata code

  >`folder.hpp`: Kata header file included by main.cpp


## Formatting
If you want to format the code, run: `./format.sh` and all files in all folders
will be formatted using `clang-format`. Ensure you have installed that ahead
of time.
