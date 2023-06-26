# Compiling
The files are written in plain C without any dependencies (other than the
standard library). You can compile with `clang` or `gcc`. For example:
```
gcc -Wall -Wextra -Wpedantic -O3 -flto newton_fractal_z_cubed_minus_one_real.c -o test.out -lm
```
Similarly:
```
clang -Wno-padded -Weverything -O3 -flto newton_fractal_z_cubed_minus_one_real.c -o test.out -lm
```
`clang` will complain about padding structs if `-Weverything` is passed without
`-Wno-padded`. I don't particularly care about how the compiler pads a struct,
so long as it works. This warning is of no consequence. `gcc` gives no warnings.

# License
    newton_fractals is free software: you can redistribute it and/or
    modify it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    newton_fractals is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with newton_fractals.  If not, see <https://www.gnu.org/licenses/>.
