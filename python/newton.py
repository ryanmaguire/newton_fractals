"""
################################################################################
#                                   LICENSE                                    #
################################################################################
#   This file is part of newton_fractals.                                      #
#                                                                              #
#   newton_fractals is free software: you can redistribute it and/or           #
#   modify it under the terms of the GNU General Public License as published   #
#   by the Free Software Foundation, either version 3 of the License, or       #
#   (at your option) any later version.                                        #
#                                                                              #
#   newton_fractals is distributed in the hope that it will be useful,         #
#   but WITHOUT ANY WARRANTY; without even the implied warranty of             #
#   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the              #
#   GNU General Public License for more details.                               #
#                                                                              #
#   You should have received a copy of the GNU General Public License          #
#   along with newton_fractals.  If not, see                                   #
#   <https://www.gnu.org/licenses/>.                                           #
################################################################################
#   Purpose:                                                                   #
#       Provides a routine for creating the Newton fractal for z^3 - 1.        #
################################################################################
#   Author:     Ryan Maguire                                                   #
#   Date:       August 17, 2023.                                               #
################################################################################
"""

# Used for rendering PNG files.
from PIL import Image

# Set range for x and y axes.
X_MIN = -1.0
X_MAX = 1.0

Y_MIN = -1.0
Y_MAX = 1.0

# Colors for the roots (Red, Green, Blue).
colors = [[255, 0, 30], [0, 255, 30], [0, 30, 255]]

# Number of pixels in the x and y axes.
SIZE = 512

# Maximum number of iterations allowed.
MAX_ITERS = 64

# Scale factors for converting from pixels to points in the plane.
X_FACTOR = (X_MAX - X_MIN) / float(SIZE - 1)
Y_FACTOR = (Y_MAX - Y_MIN) / float(SIZE - 1)

# The final output will be stored in these PNG files.
img = Image.new("RGB", (SIZE, SIZE), (255, 255, 255))
image = Image.new("RGB", (SIZE, SIZE))

# The roots of z^3 - 1.
roots = [1.0 + 0.0j, -0.5 + 0.8660254037844386j, -0.5 - 0.8660254037844386j]

# Loop over the pixels in the y-axis.
for y_pixel in range(SIZE):

    # Convert from pixel to the coordinate in the y-axis.
    z_y = y_pixel * Y_FACTOR + Y_MIN

    # Loop over the pixels in the x-axis.
    for x_pixel in range(SIZE):

        # Convert from pixel to the coordinate in the x-axis.
        z_x = x_pixel * X_FACTOR + X_MIN

        # Treat the point (x, y) as a complex number x + iy.
        z = complex(z_x, z_y)

        # Apply Newton's method to the current point.
        for iters in range(MAX_ITERS):

            # Perfrom Newton-Raphson on z^3 - 1 (Simplifying as well).
            root = (2.0*z*z*z + 1.0) / (3.0*z*z)

            # Checks for convergence
            if abs(root - z) < 10e-10:
                break

            # Update the current guess for Newton's method.
            z = root

        # Compute the distances from the final point to the three roots.
        dist = [abs(z - root) for root in roots]

        # The index corresponds to the minimum of these distances.
        min_dist = min(dist)
        ind = dist.index(min_dist)

        # Get the color corresponding to this root.
        col = colors[ind].copy()

        # Create a gradient in color to emphasize rate of convergence.
        col[ind] -= 10*iters

        # The "trippy" fractal has the following coloring scheme.
        trippy = ((iters % 4)*64, (iters % 8)*32, (iters % 16)*16)

        # Add the pixel to the images.
        img.putpixel((x_pixel, y_pixel), tuple(col))
        image.putpixel((x_pixel, y_pixel), trippy)

# Save the two fractals as PNG files.
img.save("newton_fractal.png", "PNG")
image.save("newton_fractal_alt.png", "PNG")
