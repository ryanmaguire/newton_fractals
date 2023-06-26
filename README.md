# Table of Contents
1. [Newton Fractals](#nf)
2. [License](#license)

# Newton Fractals <a name="nf"></a>
This project renders Newton fractals. Given a complex polynomial
$p:\mathbb{C}\rightarrow\mathbb{C}$ and a point $z_{0}\in\mathbb{C}$ you can
apply Newton's method to this point and see if it converges to a root. Newton's
method is iterative. It defines:
$$z_{n+1}=z_{n}-\frac{p(z_{n})}{p'(z_{n})}$$
You may then ask *if this converges, to which root does it converge?* If there
are $N$ distinct roots, you can choose $N$ colors corresponding to each
and color $z_{0}$ based on which point Newton's method converges to. (If it
didn't converge, color it black. This is the Julia set of the Newton fractal).

The Newton fractal for $p(z)=z^{3}-1$ is given below.
![Newton Fractal](https://github.com/ryanmaguire/newton_fractals/blob/main/images/newton_fractal_z_cubed_minus_one.png "Newton Fractal")

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
